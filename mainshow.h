#ifndef MAINSHOW_H
#define MAINSHOW_H

#include <QDialog>
#include <QtCharts/QChartGlobal>


class QPushButton;

QT_CHARTS_BEGIN_NAMESPACE
class QChartView;
class QChart;
QT_CHARTS_END_NAMESPACE

typedef QPair<QPointF, QString> Data;
typedef QList<Data> DataList;
typedef QList<DataList> DataTable;

QT_CHARTS_USE_NAMESPACE

namespace Ui {
class MainShow;
}

class MainShow : public QDialog
{
    Q_OBJECT

public:
    explicit MainShow(QWidget *parent = nullptr);
    ~MainShow();

private:
    DataTable generateRandomData(int listCount, int valueMax, int valueCount) const;
    QChart *createSplineChart() const;


public slots:
    void TimeUpdate();
    void updateUI();


private:
    int m_listCount;
    int m_valueMax;
    int m_valueCount;
    QList<QChartView *> m_charts;
    DataTable m_dataTable;

private:
    Ui::MainShow *ui;
};

#endif // MAINSHOW_H
