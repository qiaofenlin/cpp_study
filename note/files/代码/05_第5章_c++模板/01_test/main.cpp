#include <iostream>

using namespace std;
class Animal{
public:
    //���麯��
    //���һ������ӵ�� ���麯�� ��ô����� ���ǳ�����
    //������ ����ʵ��������
    virtual void sleep(void) = 0;

    Animal()
    {
        cout<<"animal����"<<endl;
    }

    //������
    virtual ~Animal()
    {
        cout<<"animal����"<<endl;
    }
};

class Cat:public Animal{
public:
#if 1
    //��������  ����ʵ�� ����Ĵ��麯��
    virtual void sleep(void)
    {
        cout<<"Сè��˯��!!����"<<endl;
    }
#endif
    Cat()
    {
        cout<<"Cat�Ĺ���"<<endl;
    }
    virtual~Cat()
    {
        cout<<"Cat������"<<endl;
    }
};

void test01()
{
    Animal *p = new Cat;
    p->sleep();
    delete p;
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
