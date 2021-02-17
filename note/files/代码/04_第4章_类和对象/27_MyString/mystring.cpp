#include "mystring.h"
#include<string.h>
#include<iostream>
using namespace std;
MyString::MyString()
{
    this->str = NULL;
    this->size = 0;
    cout<<"�޲ι���"<<endl;
}

MyString::MyString(const char *str)
{
    cout<<"char *���캯��"<<endl;
    //����ռ�
    this->str = new char[strlen(str)+1];
    //�����ַ���
    strcpy(this->str, str);

    //����size
    this->size = strlen(str);
}

MyString::MyString(const MyString &ob)
{
    cout<<"�������캯��"<<endl;
    //����ռ�
    this->str = new char[strlen(ob.str)+1];
    //�����ַ���
    strcpy(this->str, ob.str);

    //����size
    this->size = ob.size;
}

MyString::~MyString()
{
    cout<<"��������"<<endl;
    if(this->str != NULL)
    {
        delete [] this->str;
        this->str = NULL;
    }
}

int MyString::Size()
{
    return this->size;
}

char& MyString::operator[](int index)//index��ʾ������±�
{
    //�ж��±��Ƿ�Ϸ�
    if(index >=0 && index < this->size)
    {
        return this->str[index];
    }
    else
    {
        cout<<"index��Ч"<<endl;
    }
}
ostream& operator<<(ostream &out, MyString &ob)
{
    out<<ob.str;//������ob�е�˽������ �������ó���Ԫ
    return out;
}

istream& operator>>(istream &in, MyString &ob)
{
    //�ǵý�ԭ�е��������
    if(ob.str != NULL)
    {
        delete [] ob.str;
        ob.str =NULL;
    }

    //��ȡ����������ַ���
    char buf[1024]="";//��ʱbuf
    in >> buf;//�ȵõ��������������  Ȼ�����buf��ʵ�ʴ�С ���ٿռ�

    ob.str = new char[strlen(buf)+1];
    strcpy(ob.str, buf);
    ob.size = strlen(buf);

    return in;
}
