#include <iostream>
#include"mystring.h"
using namespace std;

int main(int argc, char *argv[])
{
    MyString str1("hehe");
    //�Զ������ ��������<< (��ͨȫ����Ԫ����ʵ��)
    cout<<str1<<endl;
    cout<<"size = "<<str1.Size()<<endl;

    //�Զ������ ��������>> (��ͨȫ����Ԫ����ʵ��)
    cin>>str1;
    cout<<str1<<endl;
    cout<<"size = "<<str1.Size()<<endl;

    MyString str2("hello class");
    //����[]�����
    cout<<str2[1]<<endl;

    //����[]����� ����ֵ��������ֵ ����д����
    //����[]����� �ķ���ֵ����������
    str2[1] ='E';
    cout<<str2<<endl;

    return 0;
}
