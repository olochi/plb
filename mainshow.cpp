#include "mainshow.h"
#include "ui_mainshow.h"
#include <QFile>
#include <QRandomGenerator>
#include <QChart>
#include <QLineSeries>
#include <QAreaSeries>
#include <QValueAxis>
#include <QChartView>
#include <QGridLayout>
#include <QSplineSeries>
#include <QScatterSeries>
#include <QPalette>
#include <QPieSeries>
#include <QTimer>
#include <QDateTime>


MainShow::MainShow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainShow)
{
    QString qss;
    QFile qssFile(":/icon/main_show.css");
    qssFile.open(QFile::ReadOnly);
    if(qssFile.isOpen()){
        qss = QLatin1String(qssFile.readAll());
        this->setStyleSheet(qss);
        qssFile.close();
    }

    ui->setupUi(this);

    //设置无边框
    this->setWindowFlags(Qt::FramelessWindowHint);

    //创建图像
    ui->label_6->setPixmap(QPixmap("://icon/temperature"));
    ui->label_6->setScaledContents(true);
    // ui->label_6->setAlignment(Qt::AlignBottom); //居中显示

    ui->label_8->setPixmap(QPixmap("://icon/windspeed"));
    // pix.load("://icon/icon/windspeed");
    // fitpixmap = pix.scaled(25, 25, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    // ui->label_8->setPixmap(QPixmap(fitpixmap));
    ui->label_8->setScaledContents(true);

    ui->label_11->setPixmap(QPixmap("://icon/airpressure"));
    ui->label_11->setScaledContents(true);

    ui->label_14->setPixmap(QPixmap("://icon/humidity"));
    ui->label_14->setScaledContents(true);

    ui->label_17->setPixmap(QPixmap("://icon/wind direction"));
    ui->label_17->setScaledContents(true);

    ui->label_20->setPixmap(QPixmap("://icon/temperature"));
    ui->label_20->setScaledContents(true);

    ui->label_43->setPixmap(QPixmap("://icon/green"));
    ui->label_43->setScaledContents(true);

    ui->label_45->setPixmap(QPixmap("://icon/red"));
    ui->label_45->setScaledContents(true);

    ui->label_53->setPixmap(QPixmap("://icon/green"));
    ui->label_53->setScaledContents(true);

    ui->label_55->setPixmap(QPixmap("://icon/red"));
    ui->label_55->setScaledContents(true);

    ui->label_57->setPixmap(QPixmap("://icon/green"));
    ui->label_57->setScaledContents(true);

    ui->label_62->setPixmap(QPixmap("://icon/red"));
    ui->label_62->setScaledContents(true);

    QTimer * timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(TimeUpdate()));//将定时器与TimeUpdate函数绑定
    timer->start(100);//一秒计时一次


    //画图
    //生成随机测试数据
    m_listCount = 1;
    m_valueMax = 10;
    m_valueCount = 7;
    m_dataTable = generateRandomData(m_listCount, m_valueMax, m_valueCount);

    QChartView *chartView;

    //画tab1的图
    chartView = new QChartView(createSplineChart());
    chartView->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    // chartView->resize();
    m_charts << chartView;
    QGridLayout *baseLayout_tab_weather = new QGridLayout();//布局管理器
    baseLayout_tab_weather->addWidget(chartView, 0, 0);
    // baseLayout_2->setContentsMargins(0,0,0,0);
    ui->widget_s1_bottom->setLayout(baseLayout_tab_weather);

    updateUI();

}





MainShow::~MainShow()
{
    delete ui;
}

DataTable MainShow::generateRandomData(int listCount, int valueMax, int valueCount) const
{
    DataTable dataTable;

    // generate random data
    for (int i(0); i < listCount; i++) {
        DataList dataList;
        qreal yValue(0);
        for (int j(0); j < valueCount; j++) {
            yValue = yValue + QRandomGenerator::global()->bounded(valueMax / (qreal) valueCount);
            QPointF value((j + QRandomGenerator::global()->generateDouble()) * ((qreal) m_valueMax / (qreal) valueCount),
                          yValue);
            QString label1 = "数据 " + QString::number(i) + ":" + QString::number(j);
            dataList << Data(value, label1);
        }
        dataTable << dataList;
    }

    return dataTable;

}

QChart *MainShow::createSplineChart() const
{
    QChart *chart = new QChart();
    // chart->setTitle("曲线图");
    QString name("数据 ");
    int nameIndex = 0;
    for (const DataList &list : m_dataTable) {
        QSplineSeries *series = new QSplineSeries(chart);
        for (const Data &data : list)
            series->append(data.first);
        series->setName(name + QString::number(nameIndex));
        nameIndex++;
        chart->addSeries(series);
    }

    chart->createDefaultAxes();
    chart->axes(Qt::Horizontal).first()->setRange(0, m_valueMax);
    chart->axes(Qt::Vertical).first()->setRange(0, m_valueCount);

    // Add space to label to add space between labels and axis
    QValueAxis *axisY = qobject_cast<QValueAxis*>(chart->axes(Qt::Vertical).first());
    Q_ASSERT(axisY);
    axisY->setLabelFormat("%.1f  ");

    chart->setTheme(QChart::ChartThemeBlueIcy);

    // chart->axisY()->setGridLineVisible(false);   //隐藏背景网格Y轴框线
    chart->axisX()->setGridLineVisible(false);   //隐藏背景网格X轴框线


    // chart->removeAxis(chart->axisY());
    return chart;

}

void MainShow::TimeUpdate()
{
    QDateTime  time = QDateTime::currentDateTime();
    QString current_date = time.toString("hh:mm:ss");
    ui->label_realtime->setText(current_date);

}

void MainShow::updateUI()
{
    const auto charts = m_charts;

    for (QChartView *chart : charts){
        chart->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        // chart->setTheme(QChart::ChartThemeDark);
        chart->chart()->setBackgroundBrush(QColor(4,14,68)); //设置chart背景透明

        chart->setContentsMargins(0, 0, 0, 0);   //设置chartview边框
        if (chart->chart()->objectName() == "piechart"){

        }else {
            chart->chart()->axisX()->setLabelsColor(QColor(255, 255, 255));
            chart->chart()->axisY()->setLabelsColor(QColor(255, 255, 255));
        }
        chart->setStyleSheet("background-color: transparent");   //qchartview透明
        chart->setRenderHint(QPainter::Antialiasing, true);
    }

    // QPalette pal = window()->palette();
    // pal.setColor(QPalette::Window, QRgb(040e44));
    // window()->setPalette(pal);

    for (QChartView *chartView : charts) {
        chartView->chart()->legend()->setAlignment(Qt::AlignBottom);
        chartView->chart()->legend()->setLabelColor(QColor(255, 255, 255));
        chartView->chart()->setTitleBrush(QColor(255, 255, 255));
        // chartView->chart()->legend()->show();
        chartView->chart()->legend()->hide();
    }



}
