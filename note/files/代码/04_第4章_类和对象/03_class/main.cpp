#include <iostream>

using namespace std;
class Data
{
public:
    int num;
public:
    Data(int n)
    {
        num = n;
        cout<<"�вεĹ��캯��"<<endl;
    }
    Data(const Data &ob)
    {
        cout<<"�������캯��"<<endl;
    }
    //��������
    ~Data()
    {
        cout<<"�������� num = "<<num<<endl;
    }

};

void test01()
{
    Data ob1(10);
    Data ob2 = ob1;
    cout<<"ob2.num = "<<ob2.num<<endl;
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
