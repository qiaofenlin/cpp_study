#include <iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Person
{
private:
    char *m_name;
    int m_num;
public:
    Person()
    {
        m_name = NULL;
        m_num = 0;
        cout<<"�޲ι���"<<endl;
    }
    Person(char *name,int num)
    {
        //Ϊm_name����ռ�
        m_name = (char *)calloc(1,strlen(name)+1);
        if(m_name == NULL)
        {
            cout<<"����ʧ��"<<endl;
        }
        cout<<" �Ѿ�����ÿռ�"<<endl;
        strcpy(m_name,name);
        m_num = num;
        cout<<"�вι���"<<endl;
    }

    Person(const Person &ob)//ob==>lucy
    {
        cout<<"�������캯��"<<endl;
        m_name = (char *)calloc(1, strlen(ob.m_name)+1);
        cout<<"�ռ��ѱ�����"<<endl;
        strcpy(m_name, ob.m_name);

        m_num = ob.m_num;
    }

    ~Person()
    {
        if(m_name != NULL)
        {
            cout<<"�ռ��ѱ��ͷ�"<<endl;
            free(m_name);
            m_name = NULL;
        }
        cout<<"��������"<<endl;
    }

    void showPerson(void)
    {
        cout<<"m_name = "<<m_name<<", m_num = "<<m_num<<endl;
    }
};

void test01()
{
    Person lucy("lucy",100);
    lucy.showPerson();

    //ǳ���������⣨����ͷ�ͬһ������ռ䣩
    //ͨ���Զ��� �������캯�� ����������
    Person bob = lucy;//����ϵͳ��Ĭ�Ͽ������죨������ֵ������
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
