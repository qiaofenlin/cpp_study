#include <iostream>

using namespace std;
class Data
{
public:
    Data()
    {
        cout<<"�޲ι���"<<endl;
        count++;
    }
    Data(const Data &ob)
    {
        cout<<"�������캯��"<<endl;
        count++;
    }

    ~Data()
    {
        count--;
        cout<<"��������"<<endl;
    }

    static int count;
};

int Data::count = 0;

int main(int argc, char *argv[])
{
    Data ob1;
    Data ob2;
    {
        Data ob3;
        Data ob4;
        cout<<"����ĸ���:"<<Data::count<<endl;
    }
    cout<<"����ĸ���:"<<Data::count<<endl;
    return 0;
}
