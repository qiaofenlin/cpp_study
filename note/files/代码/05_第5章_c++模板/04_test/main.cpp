#include <iostream>

using namespace std;

void mySwap(int a,int b)
{
    cout<<"��ͨ����"<<endl;
}

template<typename T>
void mySwap(T a,T b)
{
    cout<<"����ģ��"<<endl;
}
void test01()
{
    int a = 10;
    char b = 'b';

    //Ĭ������ѡ����ͨ����
    mySwap(a,a);

    //ѡ����ģ��
    mySwap<>(a,a);

    //����ģ�� �Ĳ������� �����Զ�����ת��
    //��ͨ���� �Ĳ������� �����Զ�����ת��
    mySwap(a,b);//ѡ����ͨ����


    //�û� ָ��T������
    mySwap<int>(a,b);//ѡ����ģ��
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
