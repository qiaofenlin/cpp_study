#include <iostream>
#include <list>
#include<algorithm>
#include<string>
using namespace std;
class Person
{
public:
    string name;
    int age;
public:
    Person(string name,int age)
    {
        this->name = name;
        this->age = age;
    }

    //��Ա�������� ==�����
    bool operator==(const Person &ob)
    {
        if(this->name == ob.name && this->age == ob.age)
            return true;
        return false;
    }
#if 0
    //��Ա�������� <�����
    bool operator<(const Person &ob)
    {
        if(this->age < ob.age)
            return true;

        return false;
    }
#endif
};
void printListPerson(list<Person> &L)
{
    cout<<"-----------"<<endl;
    for(list<Person>::iterator it=L.begin(); it!= L.end();it++)
    {
        cout<<(*it).name<<" "<<(*it).age<<endl;
    }
}
void test01()
{
    //����Զ�������
    list<Person> L;
    L.push_back(Person("��������",48));
    L.push_back(Person("��Ī", 28));
    L.push_back(Person("��ͷ", 18));
    L.push_back(Person("ţͷ", 19));

    printListPerson(L);

    //ɾ����ͷ
    Person tmp("��ͷ", 18);
    //����==�����
    L.remove(tmp);
    printListPerson(L);
}
#if 0
void test02()
{
    //����Զ�������
    list<Person> L;
    L.push_back(Person("��������",48));
    L.push_back(Person("��Ī", 28));
    L.push_back(Person("��ͷ", 18));
    L.push_back(Person("ţͷ", 19));
    printListPerson(L);

    //�����Զ������� ���ǿ�������<�����
    L.sort();

    printListPerson(L);
}
#endif

bool myComparePerson(const Person &ob1, const Person &ob2)
{
    return ob1.age > ob2.age;
}
void test03()
{
    //����Զ�������
    list<Person> L;
    L.push_back(Person("��������",48));
    L.push_back(Person("��Ī", 28));
    L.push_back(Person("��ͷ", 18));
    L.push_back(Person("ţͷ", 19));
    printListPerson(L);

    //�����Զ������� ���ǿ�������<�����
    L.sort(myComparePerson);

    printListPerson(L);
}

#include<vector>
void PrintVectorPerson(vector<Person> &v)
{
    cout<<"-----------"<<endl;
    for(vector<Person>::iterator it=v.begin(); it!= v.end();it++)
    {
        cout<<(*it).name<<" "<<(*it).age<<endl;
    }
}
//�º���ָ���������
class myComparePerson2
{
public:
    bool operator()(Person &ob1, Person &ob2)
    {
        return ob1.age < ob2.age;
    }
};
void test04()
{
    vector<Person> v;
    v.push_back(Person("��������",48));
    v.push_back(Person("��Ī", 28));
    v.push_back(Person("��ͷ", 18));
    v.push_back(Person("ţͷ", 19));
    PrintVectorPerson(v);

    //Ĭ�ϱȽϷ�ʽ��С-->��
    //vector����Զ������� ��ָ��������� (��ͨ����)
    //sort(v.begin(),v.end(), myComparePerson);

    //vector����Զ������� ��ָ��������� (�º���)
    sort(v.begin(),v.end(), myComparePerson2() );

    PrintVectorPerson(v);

}
class MyAdd{
public:
    //���ʾ��ǳ�Ա���� ��������operator()
    int operator()(int a, int b)
    {
        cout<<"������operator() int int"<<endl;
        return a+b;
    }
    int operator()(int a, int b, int c)
    {
        cout<<"������operator()int int int "<<endl;
        return a+b+c;
    }

};
void test05()
{
    MyAdd ob1;
    cout<<ob1.operator ()(10,20)<<endl;
    //�������Ż�
    //�ϸ����壺ob1�Ƕ��� �ͣ������ ����operator ()��Ա����
    //ob1(100,200) ob1�����Ƕ����Ǻ����� ֻ����ʽ��������
    //�����º���
    cout<<ob1(100,200)<<endl;
    cout<<ob1(100,200,300)<<endl;

    cout<<MyAdd()(1000,2000)<<endl;

}
void myPrintVectorInt(vector<int> &v)
{
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
//ָ����ӡ��ʽ
void myPrint01(int val)
{
    cout<<val<<" ";
}
void test06()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //����1:����v���� ��ͨ����
    myPrintVectorInt(v);

    //����2:����v���� ϵͳ�㷨for_each
    for_each(v.begin(),v.end(), myPrint01);
    cout<<endl;

    //����3:����v���� lambda���ʽ
    //[]��ʾ������ ()�����б� {}������
    for_each(v.begin(),v.end(), [](int val){
        cout<<val<<" ";
    }  );
}
int main(int argc, char *argv[])
{
    test06();
    return 0;
}
