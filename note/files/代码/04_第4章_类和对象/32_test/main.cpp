#include <iostream>

using namespace std;

class Base
{
private:
    int a;
    int data;
public:

    Base()
    {
        cout<<"������޲ι��캯��"<<endl;
    }
    Base(int a)
    {
        this->a = a;
        cout<<"������вι��캯��int"<<endl;
    }
    Base(int a, int data)
    {
        this->a = a;
        this->data = data;
        cout<<"������вι��캯��int int"<<endl;
    }
    ~Base()
    {
        cout<<"�����е���������"<<endl;
    }
};
class Son:public Base
{
private:
    int b;
public:
    Son()
    {
        cout<<"������޲ι���"<<endl;
    }
    Son(int b)
    {
        this->b = b;
        cout<<"������вι��캯��int"<<endl;
    }

    Son(int a,int b):Base(a),b(b)//��ʾ�ĵ��ø�����вι���
    {
        //this->b = b;
        cout<<"������вι��캯�� int int"<<endl;
    }
    //��������� ��ʼ���б� ��ʾ�ĵ��ø�����вι���
    //��������(����)
    Son(int a,int b, int c):Base(a,c),b(b)//��ʾ�ĵ��ø�����вι���
    {
        //this->b = b;
        cout<<"������вι��캯�� int int int"<<endl;
    }
    ~Son()
    {
        cout<<"�����е���������"<<endl;
    }
};
void test01()
{
    //���� Ĭ�� ����� ������޲ι���
    //Son ob1(10);

    //��������� ��ʼ���б� ��ʾ�ĵ��ø�����вι���
    //��������+()
    //Son ob2(10,20);

    Son ob3(10,20,30);
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
