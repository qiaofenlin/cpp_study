#include <iostream>

using namespace std;
void test01()
{
    //��������
    int *p = NULL;
    //p = (int *)calloc(1,sizeof(int));
    p = new int;
    *p = 100;
    cout<<"*p = "<<*p<<endl;//100
    //�ͷ� free(p)
    delete p;
}
void test02()
{
    //���� int����
    int *arr = NULL;
    //arr = (int *)calloc(5,sizeof(int));
    arr = new int[5];//����ռ��ʱ�� ����û�г�ʼ�� ֵ���

    int i=0;
    for(i=0;i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //�ͷ� newʱ����[]  delete�����[]
    delete [] arr;
}
void test03()
{
    //���� int����
    int *arr = NULL;
    //arr = (int *)calloc(5,sizeof(int));
    arr = new int[5]{1,2,3,4,5};//����ռ��ʱ�� ����û�г�ʼ�� ֵ���

    int i=0;
    for(i=0;i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    delete [] arr;
}
#include<string.h>
void test04()
{
    //char *arr = new char[32]{"hehe"};//����
    char *arr = new char[32];
    strcpy(arr,"hehe");
    cout<<arr<<endl;
    delete [] arr;
}

class Person
{
private:
    char m_name[32];
    int m_num;
public:
    Person()
    {
        cout<<"�޲ι���"<<endl;
    }
    Person(char *name,int num)
    {
        strcpy(m_name, name);
        m_num = num;
        cout<<"�вι���"<<endl;
    }
    ~Person()
    {
        cout<<"��������"<<endl;
    }
    void showPerson()
    {
        cout<<"name = "<<m_name<<", num = "<<m_num<<endl;
    }
};
void test06()
{
    //�������� arr1������ ÿ��Ԫ����Person���͵Ķ���
    //������������ʱ�� ϵͳ���Զ��� �����е�ÿ��Ԫ�� ���ù��캯��
    //�Զ������޲ι���
    Person arr1[5];

}
void test07()
{
    //�������� arr1������ ÿ��Ԫ����Person���͵Ķ���
    //������������ʱ�� ϵͳ���Զ��� �����е�ÿ��Ԫ�� ���ù��캯��
    //��Ϊ ΪԪ�� �����вι���
    //��ʼ������ �����вι��� Ϊ��ʼ�������Զ�����Ĭ�Ϲ���
    Person arr1[5]={ Person("lucy",18), Person("bob",20)};
    //arr1[0] ��0��Ԫ�� ����Person�Ķ���
    arr1[0].showPerson();
    arr1[1].showPerson();

}
void test05()
{
    //new ����Person����ռ�  �������ɹ� �ͻ� �Զ�����Person��Ĺ��캯��
    Person *p = new Person("lucy",100);

    //����p��ָ�� ����ʹ��->  ���p����ͨ���� ʹ��.
    p->showPerson();

    //delete �ȵ�����������  ���ͷŶ����ռ�
    delete p;
}

void test08()
{
    //��һ�ַ�ʽ
    Person *arr = NULL;
    arr = new Person[5];//�����޲ι���

    delete [] arr;

    //�ڶ��ַ�ʽ��
    //��ʼ����Ԫ�� �����вι��� û�г�ʼ�� �ĵ����޲ι���
    Person *arr2 = new Person[5]{Person("lucy",18), Person("bob",20)};
    (*(arr2+0)).showPerson();
    arr2[0].showPerson();
    (arr2+1)->showPerson();
    delete [] arr2;
}

void test09()
{
    Person *p = new Person("lucy",18);
    p->showPerson();

    void *p1 = p;

    delete p;

}
void test10()
{
    Person ob1;
}
int main(int argc, char *argv[])
{
    test09();
    return 0;
}
