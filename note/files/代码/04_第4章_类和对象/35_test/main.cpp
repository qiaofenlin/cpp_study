#include <iostream>

using namespace std;
class Base
{
public:
    //��̬��Ա������ �������ڶ���
    static int num;
    static int data;

    static void showData(void);

};
int Base::num  = 100;
int Base::data = 200;

class Son:public Base
{
public:
    static int data;//�������� ��̬��Ա ͬ��
    static void showData(void);
};
int Son::data = 300;

void test01()
{
    //��Base���з���
    cout<<Base::num<<endl;

    // Son Ҳӵ���˾�̬��Աnum
    cout<<Son::num<<endl;

    //�������� ��̬��Ա ͬ�� �������� ���������еĳ�Ա
    cout<<Son::data<<endl;//200

    //�������� ��̬��Ա ͬ�� ���ʸ����еĳ�Ա ����� Base::
    cout<<Son::Base::data<<endl;//200


    //�������� ͬ����̬��Ա���� ����Ĭ�Ϸ�������ľ�̬��Ա����
    Son::showData();
    //�������� ͬ����̬��Ա���� ������ʸ���ľ�̬��Ա���� ����� Base::
    Son::Base::showData();
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}



void Base::showData()
{
    cout<<"������showData"<<endl;
}

void Son::showData()
{
    cout<<"�����е�showData"<<endl;
}
