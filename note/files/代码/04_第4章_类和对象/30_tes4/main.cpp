#include <iostream>

using namespace std;
class Other
{
public:
    Other()
    {
        cout<<"�����Ա�Ĺ��캯��"<<endl;
    }
    ~Other()
    {
        cout<<"�����Ա����������"<<endl;
    }
};
class Base
{
public:
    Base()
    {
        cout<<"������޲ι��캯��"<<endl;
    }
    ~Base()
    {
        cout<<"�����е���������"<<endl;
    }
};
class Son:public Base
{
public:
    Son()
    {
        cout<<"������޲ι���"<<endl;
    }
    ~Son()
    {
        cout<<"�����е���������"<<endl;
    }

    Other ob;//�����Ա

};
void test01()
{
    Son ob1;
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
