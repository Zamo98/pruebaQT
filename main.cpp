/*#include <QApplication>
#include <QDebug>

using namespace std;

int main() {
    qDebug() << QT_VERSION_STR;
    return 1;
}*/
#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    QPushButton button ("Hello world !");
    button.show();

    return app.exec();
}