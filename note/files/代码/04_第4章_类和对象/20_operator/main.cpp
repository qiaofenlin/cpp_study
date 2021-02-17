#include <iostream>
#include<string.h>
using namespace std;
class Person
{
    //���ó���Ԫ���� �ں����� ����Person���е���������
    friend ostream& operator<<(ostream &out, Person &ob);
private:
    char *name;
    int num;
public:
    Person()
    {
        this->name = NULL;
        this->num = 0;
        cout<<"�޲ι���"<<endl;
    }
    Person(char *name, int num)
    {
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
        this->num = num;
        cout<<"�вι���"<<endl;
    }
    //��Ա���� ������������ ob1��this���� ob2�ò���ob����
    Person operator+(Person &ob)
    {
        //this ==> &ob1

        //name+name(�ַ���׷��)
        char *tmp_name = new char[strlen(this->name)+strlen(ob.name)+1];
        strcpy(tmp_name,this->name);
        strcat(tmp_name,ob.name);

        //num+num����ֵ��ӣ�
        int tmp_num = this->num+ob.num;
        Person tmp(tmp_name, tmp_num);

        //�ͷ�tmp_name�Ŀռ�
        if(tmp_name != NULL)
        {
            delete [] tmp_name;
            tmp_name = NULL;
        }

        return tmp;
    }

    //��ͨ�ĳ�Ա����
    void printPerson(void)
    {
        cout<<"name = "<<name<<", num = "<<num<<endl;
    }
    ~Person()
    {
        if(this->name != NULL)
        {
            delete [] this->name;
            this->name = NULL;
        }
        cout<<"��������"<<endl;
    }
};

//ȫ�ֺ�����Ϊ��Ԫ ������������<<
ostream& operator<<(ostream &out, Person &ob)//out=cout, ob =ob1
{
    //����ʵ�� �����ʽ
    out<<ob.name<<", "<<ob.num;

    //ÿ��ִ��Ϊ ����ֵ�õ�cout
    return out;
}

void test03()
{
    Person ob1("lucy",18);
    Person ob2("bob", 19);

    //Person ob3 = ob1.operator+(ob2);
    Person ob3 = ob1+ob2;
    cout<<ob3<<endl;
}
int main(int argc, char *argv[])
{
    test03();

    return 0;
}
