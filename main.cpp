#include "mainwindow.h"

#include <QApplication>
// #include <QFile>

int main(int argc, char *argv[])
{
    // QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling, true);
    // QCoreApplication::setAttribute(Qt::AA_UseHighDpiPixmaps, true);
    // QApplication::setHighDpiScaleFactorRoundingPolicy(
    // Qt::HighDpiScaleFactorRoundingPolicy::PassThrough);

    QApplication a(argc, argv);

    // QString qss;
    // QFile qssFile(":/icon/main.css");
    // qssFile.open(QFile::ReadOnly);
    // if(qssFile.isOpen()){
    //     qss = QLatin1String(qssFile.readAll());
    //     qApp->setStyleSheet(qss);
    //     qssFile.close();
    // }


    MainWindow w;
    w.show();
    return a.exec();
}
