#include <iostream>
#include <cstring>
using namespace std;


class Stu
{
public:
    Stu()
    {

        cout<<this<<"�޲ι���"<<endl;
    }
    Stu(int n)
    {
        num = n;
        cout<<this<<"int����"<<endl;
    }
    Stu(const Stu &ob)
    {
        cout<<this<<"��������"<<endl;
    }
    ~Stu()
    {
        cout<<this<<"��������"<<endl;
    }

//private:
    int num;
};
Stu getStu()
{

    Stu stu(100);
    cout<<&stu<<endl;
    return stu;
}
void test01()
{
    Stu stu1=getStu();
    cout<<stu1.num<<endl;
    cout<<&stu1<<endl;
}

int main(int argc, char *argv[])
{
    test01();
    return 0;
}
