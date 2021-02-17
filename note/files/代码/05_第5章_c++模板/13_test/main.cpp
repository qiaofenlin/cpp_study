#include <iostream>
#include<string>
using namespace std;

//�ϸ���˵����ģ������� ����Person ����Person<T1,T2>
template<class T1,class T2>
class Person{
public:
    T1 name;
    T2 age;
public:
    //��������
    Person(T1 name, T2 age);
    void showPerson(void);

};

//���ⶨ��
template<class T1, class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
    cout<<"�вι���"<<endl;
    this->name = name;
    this->age = age;
}

template<class T1, class T2>
void Person<T1,T2>::showPerson()
{
    cout<<"name = "<<name<<", age = "<<age<<endl;
}


int main(int argc, char *argv[])
{
    Person<string,int> ob1("��������", 18);
    ob1.showPerson();

    Person<int,int> ob2(100,200);
    ob2.showPerson();
    return 0;
}


