#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator* translator=new QTranslator();
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "Chariotte_" + QLocale(locale).name();
        if (translator->load( baseName+".qm")) {
            std::cout << "Translation " << baseName.toStdString() << " loaded" << std::endl;
            a.installTranslator(translator);
            break;
        }
        else
            std::cerr << "Cannot load translation file " << baseName.toStdString() << std::endl;
    }

    MainWindow w(translator);
    w.show();


    return a.exec();

}
