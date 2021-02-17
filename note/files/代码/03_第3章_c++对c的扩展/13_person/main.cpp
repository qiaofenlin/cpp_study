#include <iostream>
#include<cstring>
using namespace std;
class Person//�����
{
private:
    char m_name[32];//�������ʱ�� ��Ҫ����Ա��ʼ��
    int m_age;
public:
    //��ʼ������
    void initPerson(char *name, int age)
    {
        if(name != NULL)
            strcpy(m_name,name);

        if(age>0 && age <100)
            m_age = age;
    }
    //��m_name����д����
    void setName(char *name)
    {
        if(name != NULL)
            strcpy(m_name,name);
    }
    //��m_name���ж�����
    char* getName(void)
    {
        return m_name;
    }

    //��m_age����д����
    void setAge(int age)
    {
        if(age >0 && age <100)
            m_age = age;
        else
            cout<<"age��Ч"<<endl;
    }
    //��m_age���ж�����
    int getAge(void)
    {
        return m_age;
    }

    void showPerson(void)
    {
        cout<<"������"<<m_name<<", ����: "<<m_age<<endl;
    }

};

int main(int argc, char *argv[])
{
    //ͨ���� ʵ���� һ��������Person����һ��������
    Person lucy;//Person�������� �����  lucy��һ������ ʵ����ʵ�ʴ��ڣ�
    //���� ֻ�ܽ��� ���з��� ����˽������
    //��ʼ��
    lucy.initPerson("lucy",18);
    //��ȡ����
    cout<<"����:"<<lucy.getName()<<endl;
    //��ȡ����
    cout<<"����:"<<lucy.getAge()<<endl;
    //���� ����
    lucy.setAge(200);
    lucy.setAge(28);

    //����lucy����Ϣ
    lucy.showPerson();

    return 0;
}
