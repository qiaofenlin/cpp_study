#include <iostream>

using namespace std;
class Data
{
private:
    char *m_name;
public:
    //explicit ���вι��캯�� ������ ��ʽת��
    explicit Data(char  *name):m_name(name)
    {
        cout<<"�вι���"<<endl;
    }
    ~Data()
    {
        cout<<"��������"<<endl;
    }
    void showNum(void)
    {
        m_name[0]='W';
        cout<<"num = "<<m_name<<endl;
    }
};
void test03()
{
    Data ob("hehe");
    ob.showNum();
}
#if 0
void test01()
{
    //��˽ת��
    //Data data = 10;//explicit ���вι��캯�� ������ ��ʽת��
    Data data(10);//ok
    data.showNum();

    Data ob=Data(10);//ok
    ob.showNum();
}

void test02()
{
    Data *p = (Data *)malloc(sizeof(Data));
    if(p ==NULL)
    {
        cout<<"����ʧ��"<<endl;
    }

    p->showNum();
    free(p);
}
#endif
int main(int argc, char *argv[])
{
    test03();

    return 0;
}
