#include <iostream>

using namespace std;
inline int my_mul(int x,int y)
{
    return x*y;
}
void test01()
{
    cout<<"my_mul = "<<my_mul(10+10,20+20)<<endl;
}
//������Ĭ�ϲ��� ָ��x��Ĭ��ֵΪ10 yΪ20
int my_add(int x=10,int y=20)
{
    return x+y;
}
void test02()
{
    //����������� ��ô���Ե�Ĭ�ϲ�������Ч
    cout<<"my_add = "<<my_add(100,200)<<endl;//300

    //���ĳ������δ������ ������Ĭ��ֵx=100 yʹ��Ĭ��ֵ20
    cout<<"my_add = "<<my_add(100)<<endl;//120

    //x=10  y=20
    cout<<"my_add = "<<my_add()<<endl;//30
}
//������Ĭ�ϲ�����������
int func01(int x,int y=20,int z=30)
{
    return x+y+z;
}


void test03()
{
    cout<<func01(100,200)<<endl;//330
    cout<<func01(100)<<endl;//150
    //cout<<func01()<<endl;//err xû������Ĭ�ϲ��� ���봫��
}

//���ļ� �������崦��Ĭ�ϲ��� ����Ч��
//����:���ļ��� ������ ��Ĭ�ϲ���
extern int func02(int x,int y=25,int z=35);
//extern int func02(int x,int y,int z);//err
void test04()
{
    cout<<func02(100,200)<<endl;//335
    cout<<func02(100)<<endl;//160
}

void func03(int x,int y,int)
{
    cout<<"x = "<<x<<", y = "<<y<<endl;
    return;
}
void test05()
{
    //func03(10,30,"hehe");//err "hehe"��int���Ͳ���
    func03(10,30,40);
}
//ͬһ��������  ����������ͬ  �������Ͳ�ͬ  ����˳��ͬ
void myFunc(int a)
{
    cout<<"int��myFunc"<<endl;
}
void myFunc(int a,int b)
{
    cout<<"int,int ��myFunc"<<endl;
}
void myFunc(int a,double b)
{
    cout<<"int , double��myFunc"<<endl;
}
void myFunc(double a,int b)
{
    cout<<"double,int��myFunc"<<endl;
}
/*
int myFunc(double a,int b)//��������
{
    cout<<"double,int��myFunc ����ֵ����int"<<endl;
}*/
void test06()
{
    myFunc(10);//int
    myFunc(10,20);//int int
    myFunc(10,20.2);//int double
    myFunc(10.1,20);//double int

}

void myFunc02(int a)
{
    cout<<"int��myFunc02"<<endl;
}
void myFunc02(int a,int b=10)//Ĭ�ϲ���
{
    cout<<"int,int ��myFunc02"<<endl;
}
void test07()
{
    //myFunc02(int a) �� myFunc02(int a,int b=10)����ʶ��
    myFunc02(10);//�����Բ���
}
int main(int argc, char *argv[])
{
    test07();
    return 0;
}
