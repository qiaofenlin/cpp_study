#include <iostream>

using namespace std;
class Fun
{
public:
    int my_add(int x,int y)
    {
        return x+y;
    }
    //����()
    //��һ��()�����صķ��� �ڶ��������Ǳ���Ҫ����
    int operator()(int x,int y)
    {
        return x+y;
    }
};

void test01()
{
    Fun fun;
    cout<<fun.my_add(100,200)<<endl;

    cout<<fun.operator ()(100,200)<<endl;
    //�Ż� fun�ͣ������ �ͻ��Զ�Ѱ��()�����
    cout<<fun(100,200)<<endl;
    //�˴� fun(100,200)����һ�������ĺ��� ������һ����������()��� ���ã����������������
    //fun���Ǻ����� ֻ��fun��100,200������һ���������� ���Խ�fun��100,200�������º���

    //�˴���Fun��������
    //Fun()�������� Fun()(100,200) ������������(100,200)
    cout<<Fun()(100,200)<<endl;//�˽�

}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
