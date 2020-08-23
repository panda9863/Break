#include "musicwidget.h"
#include <QApplication>
#include <QFile>
class LoadQSS
{
public:
    static void setStyle(const QString &style)
    {
        QFile qss(style);
        qss.open(QFile::ReadOnly);
        qApp->setStyleSheet(qss.readAll());
        qss.close();
    }
};
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoadQSS::setStyle(":/defaultQss.qss");
    MusicWidget w;
    w.show();

    return a.exec();
}
