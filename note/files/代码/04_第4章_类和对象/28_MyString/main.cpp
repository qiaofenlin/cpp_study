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

    MyString str3("hello str3");
    cout<<"str3:"<<str3<<endl;

    //������str2 ��ֵ ��str3
    //(Ĭ�ϸ�ֵ��� ǳ����)
    //��������=���������Ա������ɣ�
    str3 = str2;
    cout<<"str3:"<<str3<<endl;

    MyString str4("hello str4");
    cout<<"str4:"<<str4<<", size = "<<str4.Size()<<endl;
    //��������=���������Ա������ɣ�
    str4="hello string";
    cout<<"str4:"<<str4<<", size = "<<str4.Size()<<endl;

    //����+�����
    MyString str5("�Ұ����");
    MyString str6("�Ұ�ǧ��");
    cout<<str5+str6<<endl;

    MyString str7("��Ұ���");
    cout<< str7+"ǧ�氮��"<<endl;

    //����==�����
    MyString str8("hehe");
    MyString str9("haha");
    if(str8 == str9)
    {
        cout<<"���"<<endl;
    }
    else
    {
        cout<<"�����"<<endl;
    }

    if(str8 == "hehe")
    {
        cout<<"���"<<endl;
    }
    else
    {
        cout<<"�����"<<endl;
    }


    return 0;
}
