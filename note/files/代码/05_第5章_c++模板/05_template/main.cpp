#include <iostream>

using namespace std;

void mySwap(int &a,int &b)
{
    cout<<"��ͨ����"<<endl;
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
void mySwap(T &a,T &b)
{
    cout<<"����ģ��"<<endl;
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}
void test01()
{
    int data1 = 10,data2 = 20;
    //����ģ�����ͨ���� ��ʶ��  ����ѡ����ͨ����
    mySwap(data1,data2);

    //����ģ�����ͨ���� ��ʶ��  ѡ����ģ�� ��<>
    mySwap<>(data1,data2);
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
