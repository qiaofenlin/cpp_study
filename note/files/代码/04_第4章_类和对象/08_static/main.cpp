#include <iostream>

using namespace std;
class Data
{
public:
    int num;//��ͨ��Ա����
    static int data;//��̬��Ա����(��������)
};
//�����ʱ�� ����Ҫ��static
 int Data::data=100;//���ⶨ��+��ʼ��

void test01()
{
    //data�Ǿ�̬��Ա���� �������� ����ͨ��������::ֱ�ӷ���
    cout<<Data::data<<endl;//100
    //��ֵ
    Data::data = 200;
    cout<<Data::data<<endl;//200

    //data��̬���� �����ж��� ����� ����ͨ������������
    Data ob1;
    ob1.data = 300;
    cout<<Data::data<<endl;//300

    Data ob2;
    cout<<ob2.data<<endl;//300

    //��ͨ��Ա���� ���ڶ���� ֻ��ͨ������������
    ob1.num = 100;
    cout<<"ob2.num = "<<ob2.num<<endl;//���ֵ
    //cout<<Data::num<<endl;//��ͨ��Ա��������ͨ�������Ʒ���
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
