#include <iostream>

using namespace std;
class Animal
{
public:
    void sleep(void)
    {
        cout<<"animal ������˯��"<<endl;
    }
};

class Cat:public Animal
{
public:
    void sleep(void)
    {
        cout<<"Cat è��˯��!! ����"<<endl;
    }
};
void test01()
{
    //�û��ָࣨ������ã� ���� �����������ת����
    Animal *p = new Cat;
    p->sleep();//���õ��ǻ����sleep

    Cat cat;
    Animal &ob = cat;
    ob.sleep();//���õ��ǻ����sleep
}

int main(int argc, char *argv[])
{
    test01();
    return 0;
}
