#include<QApplication>
#include <QLabel>

int main(int argc,char* argv[]) {
    QApplication app(argc,argv);
    //QLabel *label = new QLabel("Helloworld");
    //label->show();

    QLabel label("Helloworld");
    label.setWindowTitle("My App");
    label.resize(400,400);
    label.show();
    return app.exec();

}
