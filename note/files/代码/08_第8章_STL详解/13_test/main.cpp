#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
//��ͨ���� ��Ϊ������
void myPrintInt01(int val,int tmp)
{
    cout<<val+tmp<<" ";
}
void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //��ͨ���� ��Ҫʹ��ptr_funת���ɺ���������
    for_each(v.begin(),v.end(), bind2nd(ptr_fun(myPrintInt01),1000));
    cout<<endl;
}
int myTransInt(int val)
{
    return val;
}
class MyTransInt{
public:
    int operator()(int val)
    {
        return val;
    }
};

void test02()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);

    //��v1������Ԫ�� ���˵� v2��
    vector<int> v2;
    //Ԥ�ȣ�����v2�Ĵ�С
    v2.resize(v1.size());

    //transform(v1.begin(),v1.end(),v2.begin(), ���˷�ʽ);
    //transform(v1.begin(),v1.end(),v2.begin(),myTransInt);
    transform(v1.begin(),v1.end(),v2.begin(),MyTransInt());

    for_each(v2.begin(),v2.end(),[](int val){cout<<val<<" ";});
    cout<<endl;
}

#include<string>
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
    bool operator==(const Person &ob)
    {
        if(this->name == ob.name && this->age==ob.age)
            return true;
        return false;
    }
};

void test03()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);

    vector<int>::iterator ret;
    ret = find(v1.begin(),v1.end(),20);
    if(ret != v1.end())
    {
        cout<<"�ҵ�������Ϊ:"<<*ret<<endl;
    }

    vector<Person> v2;
    v2.push_back(Person("��������",18));
    v2.push_back(Person("С��",19));
    v2.push_back(Person("С��",20));
    v2.push_back(Person("ţͷ",21));

    Person tmp("С��",20);
    vector<Person>::iterator ret2;
    //����findѰ���Զ������� ��Ҫ����==
    ret2 = find(v2.begin(),v2.end(),tmp);
    if(ret2 != v2.end())
    {
        cout<<"�ҵ�������name="<<(*ret2).name<<",age="<<(*ret2).age<<endl;
    }

}
bool myGreaterThan20(int val)
{
    return val>20;
}
class MyGreaterThan20{
public:
    bool operator()(int val)
    {
        return val>20;
    }
};

void test04()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);

    //Ѱ�ҵ�һ������20����
    vector<int>::iterator ret;
    //ret = find_if(v1.begin(),v1.end(), myGreaterThan20 );
    ret = find_if(v1.begin(),v1.end(), MyGreaterThan20() );
    if(ret != v1.end())
    {
        cout<<"Ѱ�ҵ�������Ϊ:"<<*ret<<endl;
    }
}
void test05()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(20);
    v1.push_back(40);
    v1.push_back(50);
    v1.push_back(50);
    vector<int>::iterator ret;
    //������ͨ���� ����Ҫ�ص�����
    ret = adjacent_find(v1.begin(),v1.end());
    if(ret != v1.end())
    {
        cout<<"Ѱ�ҵ��ظ�������:"<<*ret<<endl;
    }

    vector<Person> v2;
    v2.push_back(Person("��������",18));
    v2.push_back(Person("С��",19));
    v2.push_back(Person("С��",19));
    v2.push_back(Person("ţͷ",21));
    vector<Person>::iterator ret2;
    ret2 = adjacent_find(v2.begin(),v2.end());
    if(ret2 != v2.end())
    {
        cout<<"Ѱ�ҵ��ظ�������:"<<\
              (*ret2).name<<" "<<(*ret2).age<<endl;
    }
}

void test06()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    bool ret = binary_search(v1.begin(),v1.end(),30);
    if(ret == true)
    {
        cout<<"�ҵ�"<<endl;
    }
    else
    {
        cout<<"δ�ҵ�"<<endl;
    }
}
bool myGreaterThan10(int val)
{
    return val>10;
}
class MyGreaterThan10
{
public:
    bool operator()(int val)
    {
        return val>10;
    }
};
void test07()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(10);
    v1.push_back(40);
    v1.push_back(10);

    cout<<count(v1.begin(),v1.end(),10)<<endl;//3

    //��ͨ����
    cout<<count_if(v1.begin(),v1.end(), myGreaterThan10)<<endl;//2
    //��������
    cout<<count_if(v1.begin(),v1.end(), MyGreaterThan10())<<endl;//2
    //�ڽ���������
    cout<<count_if(v1.begin(),v1.end(), bind2nd(greater<int>(),10))<<endl;//2
}
int main(int argc, char *argv[])
{
    test07();
    return 0;
}
