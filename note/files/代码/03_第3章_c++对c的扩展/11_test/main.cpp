#include <iostream>

using namespace std;
class Person//����ĸ���
{//����ڲ�
private:
    int m_money;//˽������
protected:
    int m_age;
public:
    void dese()
    {
        m_money = 100;
        m_age = 18;
        cout<<"���з� �г� ������"<<m_age<<"������Ǯ"<<m_money<<"������ �ҾͰ��Nɪ"<<endl;

    }
};
void test01()
{
    //���� ȥ ʵ���� һ�����󣨾�����Person����һ��������
    Person lucy;
    cout<<"�ֵ����Ǯ:"<<lucy.m_money<<endl;//err �ڵ��ⲿ���ɷ���
    //cout<<"�ֵ��������:"<<lucy.m_age<<endl;//err �ڵ��ⲿ���ɷ���

    lucy.dese();//ok ���е�����ⲿ���÷���
    //private protected��Ȼ��˽�С������� ���ⲻ�ɷ��� �����û����Խ��� public���еķ���
    //��ӵķ���˽�С�����������
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
