#include <iostream>

using namespace std;
class A
{
private:
    int m_a;
public:
    A()
    {
        cout<<"A�޲ι��캯��"<<endl;
    }
    A(int a)
    {
        m_a = a;
        cout<<"A�вι��캯��"<<endl;
    }
    ~A()
    {
        cout<<"A��������"<<endl;
    }
};
class B
{
private:
    int m_b;
public:
    B()
    {
        cout<<"B�޲ι��캯��"<<endl;
    }
    B(int b)
    {
        m_b = b;
        cout<<"B�вι��캯��"<<endl;
    }
    ~B()
    {
        cout<<"B��������"<<endl;
    }
};

class Data
{
private:
    A oba;//�����Ա
    B obb;//�����Ա


    int data;//�������ͳ�Ա
public:
    Data()
    {
        cout<<"Data�޲ι���"<<endl;
    }

    //��ʼ���б�:������+() ��ʾ���� ���ö����Ա�Ĺ��캯��
    Data(int a, int b, int c):oba(a),obb(b),data(c)
    {
        //data =c;
        cout<<"�вι���"<<endl;
    }
    ~Data()
    {
        cout<<"Data��������"<<endl;
    }

};
void test01()
{
    //�ȵ��� �����Ա�Ĺ���-->�Լ��Ĺ��캯��-->�����Լ�--->���������Ա
    //Data ob1;

    //ϵͳĬ�ϵ��õ��� �����Ա���޲ι���
    //������Data�Ĺ��캯���� ʹ�ó�ʼ���б� ʹ������Ա �����вι���
    Data ob2(10,20,30);

}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
