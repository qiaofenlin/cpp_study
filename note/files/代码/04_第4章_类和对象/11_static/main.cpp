#include <iostream>

using namespace std;
class Printer
{
public:
    //2���ṩһ������ ��õ���ָ��
    static Printer* getSignlePrint(void)
    {
        return signlePrint;
    }

    //4�����ù��ܺ���(�Զ���)
    void printText(char *str)
    {
        cout<<"��ӡ"<<str<<endl;
        count++;

    }
    int count;
private:
    //1������һ����̬�� ����ָ����� ����Ψһʵ����ַ
    static Printer *signlePrint;
private:
    //3����ֹ ����ʵ������������ �����캯��ȫ�� ˽��
    Printer(){count=0;}
    Printer(const Printer &ob){}

};
Printer *Printer::signlePrint = new Printer;

int main(int argc, char *argv[])
{
    //��ӡ����1
    Printer *p1 = Printer::getSignlePrint();
    p1->printText("��ְ����1");
    p1->printText("��챨��2");
    p1->printText("��ְ֤��3");

    //��ӡ����2
    Printer *p2 = Printer::getSignlePrint();
    p2->printText("��ְ����1");
    p2->printText("��챨��2");
    p2->printText("��ְ֤��3");

    cout<<"��ӡ��������:"<<p2->count<<endl;//6

    return 0;
}
