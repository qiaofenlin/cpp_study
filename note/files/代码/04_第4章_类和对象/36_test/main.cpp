#include <iostream>

using namespace std;
class Base1
{
public:
    int a;
};
class Base2
{
public:
    int a;
};

class Son:public Base1,public Base2
{

};
int main(int argc, char *argv[])
{
    Son ob;
    //ob.a = 100;//err Base1 �� Base2�ж���a��Աͬ��
    //����취:��������
    ob.Base1::a = 100;
    ob.Base2::a = 200;
    return 0;
}
