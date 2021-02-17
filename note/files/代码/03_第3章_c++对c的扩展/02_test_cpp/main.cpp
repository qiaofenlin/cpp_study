#include <iostream>

using namespace std;
#if 0
int a = 10;//ȫ�ֱ���
void test01()
{
    int a = 20;//�ֲ�����
    cout<<"�ֲ�����a = "<<a<<endl;//����ѡ��ֲ�����

    //::�������������c++���У�
    cout<<"ȫ�ֱ���a = "<<::a<<endl;//ȡȫ�ֱ���
}

//����һ������ΪA�������ռ䣨������������
namespace A {
    int a = 100;
}
namespace B {
    int a = 200;
}

void test02()
{
    //A::a  a������A��
    cout<<"A��a = "<<A::a<<endl;
    cout<<"B��a = "<<B::a<<endl;
}


namespace A {
    int a = 1000;
    namespace B {
        int a = 2000;
    }
}
void test03()
{
    cout<<"A�е�a = "<<A::a<<endl; //1000
    cout<<"B�е�a = "<<A::B::a<<endl; //2000
}

namespace A {
    int a = 100;
    int b = 200;
}
//��c��ӵ����е������ռ�A��
namespace A {
    int c = 300;
}



void test04()
{
    cout<<"A��a = "<<A::a<<endl;//100
    cout<<"A��c = "<<A::c<<endl;//200
}


namespace A {
    int a=100;//����

    void func()//����
    {
        cout<<"func����a = "<<a<<endl;
    }
}
void test05()
{
    //������ʹ��
    cout<<"A�е�a = "<<A::a<<endl;

    //������ʹ��
    A::func();
}


namespace A {
    int a=100;//����

    void func();
}

void A::func()//��Ա���� ���ⲿ�����ʱ�� �ǵü�������
{
    //���������ռ�����ݲ��ü�������
    cout<<"func����a = "<<a<<endl;
}

void funb()//��ͨ����
{
    cout<<"funb����a = "<<A::a<<endl;
}
void test06()
{
   A::func();
    funb();
}

namespace veryLongName {
    int a=100;
    void func(){cout<<"hello namespace"<<endl;}
}
int a = 200;
void test07()
{
    //usingֱ��ʹ�� �����ռ��еĳ�Ա ����� ȫ�ֱ�����ͻ
    using veryLongName::a;

    cout<<"�����ռ���a = "<<a<<endl;//�����ռ��еĳ�Ա 100
    cout<<"ȫ�ֱ�����a = "<<::a<<endl;//200

    //����funcʹ�õ�ʱ�� �����������
    veryLongName::func();
}


namespace A {
    //�������� ������+���� ��ϴ����Ǻ�������ڵ�ַ
    void func(){cout<<" �޲ε�func"<<endl;}
    void func(int a){cout<<" int��func"<<endl;}
    void func(int a,int b){cout<<" int int��func"<<endl;}
}

void test08()
{
    //usingָ�� ʹ�� A�е�func ��� ���е�func������
    using A::func;
    func();
    func(10);
    func(10,20);
}

namespace A {
    int a = 10;
}
namespace B {
    int a = 20;
}
void test09()
{
    //�˴���a ��֪����A����B��a
    //cout<<"a = "<<a<<endl;//err

    //�������
    cout<<"A::a = "<<A::a<<endl;//100
    cout<<"B::a = "<<B::a<<endl;//200
}
#endif
int a = 200;
namespace veryLongName {
    int a=100;
    void func(){cout<<"hello namespace"<<endl;}
}

void test07()
{
    //usingֱ��ʹ�� �����ռ��еĳ�Ա ����� ȫ�ֱ�����ͻ
    using namespace veryLongName;

    cout<<"�����ռ���a = "<<a<<endl;//�����ռ��еĳ�Ա 100
    cout<<"ȫ�ֱ�����a = "<<::a<<endl;//200

    //����funcʹ�õ�ʱ�� �����������
    veryLongName::func();
}
int main(int argc, char *argv[])
{
    test07();
    return 0;
}
