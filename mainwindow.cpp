#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
#include <QStandardItem>
#include <QStringList>
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
#include <QStackedBarSeries>
#include <QBarSet>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //设置无边框
    this->setWindowFlags(Qt::FramelessWindowHint);


    // 设置数据库连接
    qDebug()<< QSqlDatabase::drivers();
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("cqu1512");
    db.setDatabaseName("plb");
    if( !db.open() ){       //数据库打开失败
        QMessageBox::warning(this,"错误",db.lastError().text());
        return;
    }

    ui->setupUi(this);

    m_mainshow = new MainShow;
    m_mainshow->show();

    QString qss;
    QFile qssFile(":/icon/main.css");
    qssFile.open(QFile::ReadOnly);
    if(qssFile.isOpen()){
        qss = QLatin1String(qssFile.readAll());
        this->setStyleSheet(qss);
        qssFile.close();
    }

    //生成随机测试数据
    m_listCount = 3;
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
    ui->widget_tab_weather->setLayout(baseLayout_tab_weather);

    //画tab_WPL的图
    chartView = new QChartView(createAreaChart());
    chartView->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    // chartView->resize();
    m_charts << chartView;
    QGridLayout *baseLayout_tab_flowfield = new QGridLayout();//布局管理器
    baseLayout_tab_flowfield->addWidget(chartView, 0, 0);
    // baseLayout_2->setContentsMargins(0,0,0,0);
    ui->widget_tab_flowfiled->setLayout(baseLayout_tab_flowfield);

    //画tab_VAG的图
    chartView = new QChartView(createScatterChart());
    chartView->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    // chartView->resize();
    m_charts << chartView;
    QGridLayout *baseLayout_tab_AVG_1 = new QGridLayout();//布局管理器
    baseLayout_tab_AVG_1->addWidget(chartView, 0, 0);
    // baseLayout_2->setContentsMargins(0,0,0,0);
    ui->widget_AVG_1->setLayout(baseLayout_tab_AVG_1);

    chartView = new QChartView(createBarChart(1));
    chartView->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    // chartView->resize();
    m_charts << chartView;
    QGridLayout *baseLayout_tab_AVG_2 = new QGridLayout();//布局管理器
    baseLayout_tab_AVG_2->addWidget(chartView, 0, 0);
    // baseLayout_2->setContentsMargins(0,0,0,0);
    ui->widget_AVG_2->setLayout(baseLayout_tab_AVG_2);

    chartView = new QChartView(createPieChart());
    chartView->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    // chartView->resize();
    m_charts << chartView;
    QGridLayout *baseLayout_tab_AVG_3 = new QGridLayout();//布局管理器
    baseLayout_tab_AVG_3->addWidget(chartView, 0, 0);
    // baseLayout_2->setContentsMargins(0,0,0,0);
    ui->widget_AVG_3->setLayout(baseLayout_tab_AVG_3);

    chartView = new QChartView(createBarChart(1));
    chartView->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    // chartView->resize();
    m_charts << chartView;
    QGridLayout *baseLayout_tab_AVG_4 = new QGridLayout();//布局管理器
    baseLayout_tab_AVG_4->addWidget(chartView, 0, 0);
    // baseLayout_2->setContentsMargins(0,0,0,0);
    ui->widget_AVG_4->setLayout(baseLayout_tab_AVG_4);

    //画tab_RP的图
    chartView = new QChartView(createLineChart());
    chartView->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    // chartView->resize();
    m_charts << chartView;
    QGridLayout *baseLayout_tab_RP_1 = new QGridLayout();//布局管理器
    baseLayout_tab_RP_1->addWidget(chartView, 0, 0);
    // baseLayout_2->setContentsMargins(0,0,0,0);
    ui->widget_RP_1->setLayout(baseLayout_tab_RP_1);

    chartView = new QChartView(createLineChart());
    chartView->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    // chartView->resize();
    m_charts << chartView;
    QGridLayout *baseLayout_tab_RP_2 = new QGridLayout();//布局管理器
    baseLayout_tab_RP_2->addWidget(chartView, 0, 0);
    // baseLayout_2->setContentsMargins(0,0,0,0);
    ui->widget_RP_2->setLayout(baseLayout_tab_RP_2);

    chartView = new QChartView(createLineChart());
    chartView->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    // chartView->resize();
    m_charts << chartView;
    QGridLayout *baseLayout_tab_RP_3 = new QGridLayout();//布局管理器
    baseLayout_tab_RP_3->addWidget(chartView, 0, 0);
    // baseLayout_2->setContentsMargins(0,0,0,0);
    ui->widget_RP_3->setLayout(baseLayout_tab_RP_3);



    updateUI();

    //显示数据库数据
    connectMysql2Table_weather();
    connectMysql2Table_flowfield();
    connectMysql2Table_RP1();
    connectMysql2Table_RP2();
    connectMysql2Table_RP3();

}

void MainWindow::updateUI()
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
        chartView->chart()->legend()->show();
    }



}

DataTable MainWindow::generateRandomData(int listCount, int valueMax, int valueCount) const
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
            QString label = "数据 " + QString::number(i) + ":" + QString::number(j);
            dataList << Data(value, label);
        }
        dataTable << dataList;
    }

    return dataTable;

}

QChart *MainWindow::createAreaChart() const
{
    QChart *chart = new QChart();
    // chart->setTitle("Area chart");

    // The lower series initialized to zero values
    QLineSeries *lowerSeries = 0;
    QString name("数据 ");
    int nameIndex = 0;
    for (int i(0); i < m_dataTable.count(); i++) {
        QLineSeries *upperSeries = new QLineSeries(chart);
        for (int j(0); j < m_dataTable[i].count(); j++) {
            Data data = m_dataTable[i].at(j);
            if (lowerSeries) {
                const QVector<QPointF>& points = lowerSeries->pointsVector();
                upperSeries->append(QPointF(j, points[i].y() + data.first.y()));
            } else {
                upperSeries->append(QPointF(j, data.first.y()));
            }
        }
        QAreaSeries *area = new QAreaSeries(upperSeries, lowerSeries);
        area->setName(name + QString::number(nameIndex));
        nameIndex++;
        chart->addSeries(area);
        lowerSeries = upperSeries;
    }

    chart->createDefaultAxes();
    chart->axes(Qt::Horizontal).first()->setRange(0, m_valueCount - 1);
    chart->axes(Qt::Vertical).first()->setRange(0, m_valueMax);
    // Add space to label to add space between labels and axis
    QValueAxis *axisY = qobject_cast<QValueAxis*>(chart->axes(Qt::Vertical).first());
    Q_ASSERT(axisY);
    axisY->setLabelFormat("%.1f  ");

    // chart->setContentsMargins(0, 0, 0, 0);
    // chart->setMargins(QMargins(0, 0, 0, 0));
    // chart->setBackgroundRoundness(0);

    chart->setTheme(QChart::ChartThemeBlueIcy);

    chart->axisX()->setGridLineVisible(false);   //隐藏背景网格X轴框线

    return chart;

}

QChart *MainWindow::createBarChart(int valueCount) const
{
    Q_UNUSED(valueCount);
    QChart *chart = new QChart();
    // chart->setTitle("Bar chart");

    QStackedBarSeries *series = new QStackedBarSeries(chart);
    for (int i(0); i < m_dataTable.count(); i++) {
        QBarSet *set = new QBarSet("数据 " + QString::number(i));
        for (const Data &data : m_dataTable[i])
            *set << data.first.y();
        series->append(set);
    }
    chart->addSeries(series);

    chart->createDefaultAxes();
    chart->axes(Qt::Vertical).first()->setRange(0, m_valueMax * 2);
    // Add space to label to add space between labels and axis
    QValueAxis *axisY = qobject_cast<QValueAxis*>(chart->axes(Qt::Vertical).first());
    Q_ASSERT(axisY);
    axisY->setLabelFormat("%.1f  ");

    chart->setTheme(QChart::ChartThemeBlueIcy);

    chart->axisX()->setGridLineVisible(false);   //隐藏背景网格X轴框线
    return chart;

}

QChart *MainWindow::createPieChart() const
{
    QChart *chart = new QChart();
    // chart->setTitle("Pie chart");

    QPieSeries *series = new QPieSeries(chart);
    series->setPieSize(0.9);
    // for (const Data &data : m_dataTable[0]) {
    for (int i = 0; i < 3; i++) {
        const Data &data = m_dataTable[0].at(i);
        QPieSlice *slice = series->append(data.second, data.first.y());
        if (data == m_dataTable[0].first()) {
            // Show the first slice exploded with label
            slice->setLabelVisible();
            slice->setLabelColor(QColor(255, 255, 255));
            slice->setExploded();
            slice->setExplodeDistanceFactor(0.5);
        }
    }
    series->setPieSize(0.6);
    chart->addSeries(series);
    chart->setObjectName("piechart");

    chart->setTheme(QChart::ChartThemeBlueIcy);

    return chart;

}

QChart *MainWindow::createLineChart() const
{
    //![1]
    QChart *chart = new QChart();
    // chart->setTitle("Line chart");
    //![1]

    //![2]
    QString name("数据 ");
    int nameIndex = 0;
    for (const DataList &list : m_dataTable) {
        QLineSeries *series = new QLineSeries(chart);
        for (const Data &data : list)
            series->append(data.first);
        series->setName(name + QString::number(nameIndex));
        nameIndex++;
        chart->addSeries(series);
    }
    //![2]

    //![3]
    chart->createDefaultAxes();
    chart->axes(Qt::Horizontal).first()->setRange(0, m_valueMax);
    chart->axes(Qt::Vertical).first()->setRange(0, m_valueCount);
    //![3]
    //![4]
    // Add space to label to add space between labels and axis
    QValueAxis *axisY = qobject_cast<QValueAxis*>(chart->axes(Qt::Vertical).first());
    Q_ASSERT(axisY);
    axisY->setLabelFormat("%.1f  ");
    //![4]
    chart->setTheme(QChart::ChartThemeBlueIcy);

    chart->axisX()->setGridLineVisible(false);   //隐藏背景网格X轴框线

    // // 获取所有的轴并删除
    // foreach (auto ax, chart->axes()) {
    //     chart->removeAxis(ax);
    // }

    return chart;

}

QChart *MainWindow::createSplineChart() const
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

    chart->axisX()->setGridLineVisible(false);   //隐藏背景网格X轴框线

    return chart;

}

QChart *MainWindow::createScatterChart() const
{
    // scatter chart
    QChart *chart = new QChart();
    // chart->setTitle("Scatter chart");
    QString name("数据 ");
    int nameIndex = 0;
    for (const DataList &list : m_dataTable) {
        QScatterSeries *series = new QScatterSeries(chart);
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

    chart->axisX()->setGridLineVisible(false);   //隐藏背景网格X轴框线

    return chart;

}

void MainWindow::connectMysql2Table_weather()
{
    ui->table_tabWeather->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


    QStringList headerText;
    headerText<<"设备id"<<"时间"<<"数据";
    // headerText.append("设备id");
    // headerText.append("时间");
    // headerText.append("数据");
    ui->table_tabWeather->setColumnCount(headerText.count());
    // ui->tableWidget->setColumnCount(headerText.count());

    for (int i = 0; i < headerText.count(); i++)
    {
        ui->table_tabWeather->setHorizontalHeaderItem(i, new QTableWidgetItem(headerText.at(i)));
    }

    QSqlQuery query;
    query.exec("SELECT device_id, time_stamp, data_value from t_temprature");

    qint32 rowNo = 0;

    while (query.next()) {
        QTableWidgetItem *item;
        // QStandarItem *sItem;

        ui->table_tabWeather->insertRow(rowNo);

        for (int i = 0; i < 3; i++)
        {
            item = new QTableWidgetItem(query.value(i).toString(), i);
            ui->table_tabWeather->setItem(rowNo, i, item);
        }

        rowNo++;
    }
    //让tableWidget内容中的每个元素居中
    ui->table_tabWeather->setSelectionBehavior(QAbstractItemView::SelectRows);//设置整行选中

    for (int i = 0; i<10; i++)
    {
        for (int j = 0; j<3; j++)
        {
            ui->table_tabWeather->item (i,j)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        }
    }

    ui->table_tabWeather->verticalHeader()->hide();  //隐藏序号列

    ui->table_tabWeather->horizontalHeader()->setStyleSheet("QHeaderView::section{background:#0b0d66; color: white;}");//设置表头背景和字体颜色
    // table_tabflowfield

}

void MainWindow::connectMysql2Table_flowfield()
{

    ui->table_tabflowfield->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


    QStringList headerText;
    headerText<<"设备id"<<"时间"<<"数据";
    // headerText.append("设备id");
    // headerText.append("时间");
    // headerText.append("数据");
    ui->table_tabflowfield->setColumnCount(headerText.count());
    // ui->tableWidget->setColumnCount(headerText.count());

    for (int i = 0; i < headerText.count(); i++)
    {
        ui->table_tabflowfield->setHorizontalHeaderItem(i, new QTableWidgetItem(headerText.at(i)));
    }

    QSqlQuery query;
    query.exec("SELECT device_id, time_stamp, data_value from t_temprature");

    qint32 rowNo = 0;

    while (query.next()) {
        QTableWidgetItem *item;
        // QStandarItem *sItem;

        ui->table_tabflowfield->insertRow(rowNo);

        for (int i = 0; i < 3; i++)
        {
            item = new QTableWidgetItem(query.value(i).toString(), i);
            ui->table_tabflowfield->setItem(rowNo, i, item);
        }

        rowNo++;
    }
    //让tableWidget内容中的每个元素居中
    ui->table_tabflowfield->setSelectionBehavior(QAbstractItemView::SelectRows);//设置整行选中

    for (int i = 0; i<10; i++)
    {
        for (int j = 0; j<3; j++)
        {
            ui->table_tabflowfield->item (i,j)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        }
    }

    ui->table_tabflowfield->verticalHeader()->hide();  //隐藏序号列

    ui->table_tabflowfield->horizontalHeader()->setStyleSheet("QHeaderView::section{background:#0b0d66; color: white;}");//设置表头背景和字体颜色
    // table_tabflowfield
}

void MainWindow::connectMysql2Table_RP1()
{
    ui->table_tabRP_1->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


    QStringList headerText;
    headerText<<"设备id"<<"时间"<<"数据";
    // headerText.append("设备id");
    // headerText.append("时间");
    // headerText.append("数据");
    ui->table_tabRP_1->setColumnCount(headerText.count());
    // ui->tableWidget->setColumnCount(headerText.count());

    for (int i = 0; i < headerText.count(); i++)
    {
        ui->table_tabRP_1->setHorizontalHeaderItem(i, new QTableWidgetItem(headerText.at(i)));
    }

    QSqlQuery query;
    query.exec("SELECT device_id, time_stamp, data_value from t_temprature");

    qint32 rowNo = 0;

    while (query.next()) {
        QTableWidgetItem *item;
        // QStandarItem *sItem;

        ui->table_tabRP_1->insertRow(rowNo);

        for (int i = 0; i < 3; i++)
        {
            item = new QTableWidgetItem(query.value(i).toString(), i);
            ui->table_tabRP_1->setItem(rowNo, i, item);
        }

        rowNo++;
    }
    //让tableWidget内容中的每个元素居中
    ui->table_tabRP_1->setSelectionBehavior(QAbstractItemView::SelectRows);//设置整行选中

    for (int i = 0; i<10; i++)
    {
        for (int j = 0; j<3; j++)
        {
            ui->table_tabRP_1->item (i,j)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        }
    }

    ui->table_tabRP_1->verticalHeader()->hide();  //隐藏序号列

    ui->table_tabRP_1->horizontalHeader()->setStyleSheet("QHeaderView::section{background:#0b0d66; color: white;}");//设置表头背景和字体颜色
    // table_tabflowfield

}

void MainWindow::connectMysql2Table_RP2()
{
    ui->table_tabRP_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


    QStringList headerText;
    headerText<<"设备id"<<"时间"<<"数据";
    // headerText.append("设备id");
    // headerText.append("时间");
    // headerText.append("数据");
    ui->table_tabRP_2->setColumnCount(headerText.count());
    // ui->tableWidget->setColumnCount(headerText.count());

    for (int i = 0; i < headerText.count(); i++)
    {
        ui->table_tabRP_2->setHorizontalHeaderItem(i, new QTableWidgetItem(headerText.at(i)));
    }

    QSqlQuery query;
    query.exec("SELECT device_id, time_stamp, data_value from t_temprature");

    qint32 rowNo = 0;

    while (query.next()) {
        QTableWidgetItem *item;
        // QStandarItem *sItem;

        ui->table_tabRP_2->insertRow(rowNo);

        for (int i = 0; i < 3; i++)
        {
            item = new QTableWidgetItem(query.value(i).toString(), i);
            ui->table_tabRP_2->setItem(rowNo, i, item);
        }

        rowNo++;
    }
    //让tableWidget内容中的每个元素居中
    ui->table_tabRP_2->setSelectionBehavior(QAbstractItemView::SelectRows);//设置整行选中

    for (int i = 0; i<10; i++)
    {
        for (int j = 0; j<3; j++)
        {
            ui->table_tabRP_2->item (i,j)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        }
    }

    ui->table_tabRP_2->verticalHeader()->hide();  //隐藏序号列

    ui->table_tabRP_2->horizontalHeader()->setStyleSheet("QHeaderView::section{background:#0b0d66; color: white;}");//设置表头背景和字体颜色
    // table_tabflowfield

}

void MainWindow::connectMysql2Table_RP3()
{
    ui->table_tabRP_3->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


    QStringList headerText;
    headerText<<"设备id"<<"时间"<<"数据";
    // headerText.append("设备id");
    // headerText.append("时间");
    // headerText.append("数据");
    ui->table_tabRP_3->setColumnCount(headerText.count());
    // ui->tableWidget->setColumnCount(headerText.count());

    for (int i = 0; i < headerText.count(); i++)
    {
        ui->table_tabRP_3->setHorizontalHeaderItem(i, new QTableWidgetItem(headerText.at(i)));
    }

    QSqlQuery query;
    query.exec("SELECT device_id, time_stamp, data_value from t_temprature");

    qint32 rowNo = 0;

    while (query.next()) {
        QTableWidgetItem *item;
        // QStandarItem *sItem;

        ui->table_tabRP_3->insertRow(rowNo);

        for (int i = 0; i < 3; i++)
        {
            item = new QTableWidgetItem(query.value(i).toString(), i);
            ui->table_tabRP_3->setItem(rowNo, i, item);
        }

        rowNo++;
    }
    //让tableWidget内容中的每个元素居中
    ui->table_tabRP_3->setSelectionBehavior(QAbstractItemView::SelectRows);//设置整行选中

    for (int i = 0; i<10; i++)
    {
        for (int j = 0; j<3; j++)
        {
            ui->table_tabRP_3->item (i,j)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        }
    }

    ui->table_tabRP_3->verticalHeader()->hide();  //隐藏序号列

    ui->table_tabRP_3->horizontalHeader()->setStyleSheet("QHeaderView::section{background:#0b0d66; color: white;}");//设置表头背景和字体颜色
    // table_tabflowfield

}

MainWindow::~MainWindow()
{

    delete ui;
    // m_mainshow->close();
}


void MainWindow::closeEvent(QCloseEvent *event)
{
    // m_mainshow->close();
    MainWindow::closeEvent(event);
}




void MainWindow::on_table_tabWeather_cellChanged(int row, int column)
{
    QTableWidgetItem* item = ui->table_tabWeather->item(row, column);
    QString newValue = item->text();

    QString columnName;
    if (column = 2){
        columnName = "data_value";
    }

    QString updateSql = QString("UPDATE t_temprature set %1 = '%2' WHERE device_id = %3")
                            .arg(columnName)
                            .arg(newValue)
                            .arg(row + 1);

    QSqlQuery query;
    query.exec(updateSql);
}

