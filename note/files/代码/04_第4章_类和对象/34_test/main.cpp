#include <iostream>

using namespace std;
class Base
{
public:
    void func(void)
    {
        cout<<"�����е�void func"<<endl;
    }
    void func(int a)
    {
        cout<<"�����е�int func a = "<<a<<endl;
    }
    void myFunc()
    {
        cout<<"�����е���������"<<endl;
    }
};

class Son:public Base
{
public:
    //һ������ ʵ���� �����ͬ����Ա���� ���������и���ͬ����Ա����
    int func(int a)
    {
        cout<<"������func int "<<endl;
    }
};

void test01()
{
    //Ϊɶ�������������?����Ĺ�������� ֻ�и����Լ�֪������ô������������� ϵͳ�Զ����ã�
    //�����̳и������г�Ա����(�����������������) �ͳ�Ա����
    Son ob1;
    ob1.func(10);
    ob1.func(10);//err //һ������ ʵ���� �����ͬ����Ա���� ���������и���ͬ����Ա����
    ob1.myFunc();
    //����û� ����Ҫ���ø��� ��ͬ����Ա���� �����������
    ob1.Base::func();//���ø����void func
    ob1.Base::func(10);//���ø����int func
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
