#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //QApplication Ӧ�ó����� ��ʼ�����ǵ�Ӧ�ó���
    QApplication a(argc, argv);

    //����һ�������ڿؼ�
    Widget w;

    //��ʾһ��������  hide���ش���
    //����Ĭ�������ص�
    w.show();

    //a.exec() ���¼�ѭ���������� �ȴ��û��������棩
    return a.exec();
}
