#include <iostream>

using namespace std;
struct stu
{
    int num;
    char name[32];

    //c++���� �����ڽṹ����  �����Ա����
    void func(void)
    {
        printf("���ǽṹ���е�func");
    }

};
void test01()
{
    //C++���Բ��ü�struct
    stu lucy = {100, "lucy"};

    //���ýṹ���еĳ�Ա��������Ա������
    lucy.func();
}
void test02()
{
    int a = 10;
    int b = 20;
    cout<<"c++��"<<(a>b?a:b)<<endl;

    //a>b?a:b�������Ǳ�������(����) ��ֵ���ܱ���ֵ��
    a>b?a:b = 100;//b =100
}

void test03()
{
    const int a = 10;
    //a = 100;//err ���ܸ�����a��ֵ
}

//����
extern const int num;
struct Person
{
    int num;
    char name[32];
};
void test04()
{
    cout<<"ȫ��num = "<<num<<endl;//err ��ʶ��num

    //1��c++�� ���ڻ������� ϵͳ�����data���ٿռ� data�ŵ����ű���
    const int data = 10;
    //data = 100;//err ֻ��
    cout<<"data = "<<data<<endl;
    //2��c++�е� ��data ȡ��ַ��ʱ�� ϵͳ�ͻ��data���ٿռ�
    int *p = (int *)&data;
    *p = 2000;
    cout<<"*p = "<<*p<<endl;//�ռ������޸ĳɹ� 2000

    cout<<"data = "<<data<<endl;//data ����10Ϊɶ��

    //2�����Ա�������ʽ ��ʼ�� const���εı��� ϵͳ��Ϊ�俪�ٿռ�
    int b = 200;
    const int a= b;//ϵͳֱ��Ϊa���ٿռ� �������a������ű���
    p = (int *)&a;
    *p = 3000;
    cout<<"*p = "<<*p <<endl;//3000
    cout<<"a = "<<a <<endl;//300

    //3��const �Զ�����������(�ṹ�塢����) ϵͳ�����ռ�
    const Person per = {100,"lucy"};
    //per.num = 1000;//err
    cout<<"num = "<<per.num<<", name = "<<per.name<<endl;//100 lucy
    Person *p1 = (Person *)&per;
    p1->num = 2000;
    cout<<"num = "<<per.num<<", name = "<<per.name<<endl;//2000 lucy
}

#define MAX 1024
const short my_max =1024;
void func(short i)
{
    cout<<"short����"<<endl;
}
void func(int i)
{
    cout<<"int����"<<endl;
}
void test05()
{
    func(MAX);//int ����

    func(my_max);//short����
}

void my_func(void)
{
    //���÷�Χ �ǵ�ǰ�������
    const int my_num = 10;

    //���÷�Χ ��ǰλ�� ���ļ�����
    #define MY_NUM 10
}
void test06()
{
    //cout<<"my_num = "<<my_num<<endl;//err ��ʶ��
    cout<<"MY_NUM = "<<MY_NUM<<endl;//ok ��ʶ��
}
namespace A {
    // const������Ϊ��Ա
    const int my_a=100;

    //MY_A �����ļ� ������A
    #define MY_A 200
}
void test07()
{
    cout<<"my_a = "<<A::my_a<<endl;
    //cout<<"MY_A = "<<A::MY_A<<endl;//err
    cout<<"MY_A = "<<MY_A<<endl;
}

int main(int argc, char *argv[])
{

    test07();
    return 0;
}

