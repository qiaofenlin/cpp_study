#include <iostream>
#include<string>
//include��׼�ǰ���ͷ�ļ� �����ϲ������.cpp
//#include"person.cpp"
#include"person.hpp"
using namespace std;

int main(int argc, char *argv[])
{
    //��ģ�� �ᾭ�����α���
    //��һ�� ��ģ�� ������룬�ڶ��α��� ����ģ��ĳ�Ա���õ�ʱ��
    //c++/c �����ļ�����
    //��� ��ģ���.cpp��.h���ļ� �����ԭ�� �ڵڶ��α���
    //����.cpp��.h����һ��

    Person<string,int> ob1("��������", 18);
    ob1.showPerson();
    return 0;
}
