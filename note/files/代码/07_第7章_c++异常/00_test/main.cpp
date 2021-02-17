#include <iostream>
#include<string>
using namespace std;
int myDiv(int a,int b)
{
    if(b == 0)
        return -1;//-1��ʾʧ��
    return a/b;
}

void test01()
{
    int ret = myDiv(10,-10);
    if(ret == -1)
    {
        cout<<"�����쳣��"<<endl;
    }
    else
    {
        cout<<"��������"<<endl;
    }
}

int myDiv01(int a,int b)
{
    if(b==0)
        throw 0;//�׳��쳣

    return a/b;
}
void test02()
{
    try{
        int ret = myDiv01(10,0);
        cout<<"ret = "<<ret<<endl;
    }
#if 1
    catch(int e)//ֻ���� �׳���int���͵��쳣
    {
        cout<<"����int�����쳣 e = "<<e<<endl;
    }
#endif
    catch(float e)//ֻ���� �׳���float���͵��쳣
    {
        cout<<"����float�����쳣 e = "<<e<<endl;
    }
    catch(char e)//ֻ���� �׳���char���͵��쳣
    {
        cout<<"����char�����쳣 e = "<<e<<endl;
    }
#if 0
    catch(...)
    {
        cout<<"���������쳣"<<endl;
    }
#endif

    cout<<"��������������"<<endl;
}
class Person{
private:
    string name;
public:
    Person(string name)
    {
        this->name = name;
        cout<<"Person "<<name<<"���캯��"<<endl;
    }
    ~Person()
    {
        cout<<"Person "<<name<<"��������"<<endl;
    }
};

void test03()
{
    try{

        Person ob1("00_����");
        Person ob2("01_С��");
        Person ob3("02_С��");
        Person ob4("03_��Ī");

        throw 10;
    }
    catch(int)
    {
        cout<<"����int�쳣"<<endl;
    }
    cout<<"��������"<<endl;
}

void testFunc01()
{
    //�����ڲ������׳��κ��쳣
    //throw 10;
    //throw 4.3f;
    //throw 'a';
    //throw "hehe";
    string ob="heihie";
    throw ob;
}

//ֻ���׳�int char �쳣
void testFunc02() throw(int,char)
{
    throw 3.14f;
}

//���� ���׳��κ��쳣
void testFunc03()throw()
{
    throw 10;//�ⲿ���� ����
}

void test04()
{
    try{
        testFunc03();
    }
    catch(int e)//ֻ���� �׳���int���͵��쳣
    {
        cout<<"����int�����쳣 e = "<<e<<endl;
    }
    catch(float e)//ֻ���� �׳���float���͵��쳣
    {
        cout<<"����float�����쳣 e = "<<e<<endl;
    }
    catch(char e)//ֻ���� �׳���char���͵��쳣
    {
        cout<<"����char�����쳣 e = "<<e<<endl;
    }
    catch(char const *e)//ֻ���� �׳���char *���͵��쳣
    {
        cout<<"����char const *�����쳣 e = "<<e<<endl;
    }
    catch(string e)
    {
        cout<<"����string�����쳣 e = "<<e<<endl;
    }
}

class MyException
{
public:
    MyException()
    {
        cout<<"�쳣����"<<endl;
    }
    MyException(const MyException &ob)
    {
        cout<<"�쳣��������"<<endl;
    }
    ~MyException()
    {
        cout<<"�쳣������"<<endl;
    }
};

void test05()
{
    try{

        throw MyException();
    }
    catch(MyException &e)
    {
        cout<<"����MyException &"<<endl;
    }
}

class Person2
{
private:
    int age;
public:
    Person2(int age)
    {
        if(age<0 || age >150)
            throw out_of_range("age��Ч");
        this->age =age;
    }
};
void test06()
{
    try{
        Person2 ob(200);
    }
    catch(exception &e)
    {
        cout<<"�����쳣"<<e.what()<<endl;
    }
}
int main(int argc, char *argv[])
{
    test06();
    return 0;
}
