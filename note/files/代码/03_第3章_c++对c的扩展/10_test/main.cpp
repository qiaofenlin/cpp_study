#include <iostream>
#include"fun.h"
using namespace std;
//c���Ե�˼��:����  ���� �ֿ�
//��
typedef struct
{
    char name[32];
    int age;
}Person;

//����
typedef struct
{
    char name[32];
    int age;
    int type;
}Dog;

void PersonEat(Person *p)
{
    cout<<p->name<<"���ڳԷ�"<<endl;
}
void DogEat(Dog *d)
{
    cout<<d->name<<"���ڳԹ���, ����"<<endl;
}

void test01()
{
    Person person = {"����",43};
    Dog dog={"����",6};

    PersonEat(&person);
    DogEat(&dog);

    // ����һ�����⣨���� ��������  ������� ���� ���ô������ݣ�
    DogEat((Dog *)&person);
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
