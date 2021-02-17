#include <iostream>

using namespace std;

/*
3.1.2.1 string ���캯��
string();//����һ���յ��ַ��� ����: string str;
string(const string& str);//ʹ��һ��string�����ʼ����һ��string����
string(const char* s);//ʹ���ַ���s��ʼ��
string(int n, char c);//ʹ��n���ַ�c��ʼ�� v

3.1.2.2 string������ֵ����
string& operator=(const char* s);//char*�����ַ��� ��ֵ����ǰ���ַ���
string& operator=(const string &s);//���ַ���s������ǰ���ַ���
string& operator=(char c);//�ַ���ֵ����ǰ���ַ���
string& assign(const char *s);//���ַ���s������ǰ���ַ���
string& assign(const char *s, int n);//���ַ���s��ǰn���ַ�������ǰ���ַ���
string& assign(const string &s);//���ַ���s������ǰ�ַ���
string& assign(int n, char c);//��n���ַ�c������ǰ�ַ���
string& assign(const string &s, int start, int n);//��s��start��ʼn��
*/
void test01()
{
    //string(const char* s);//ʹ���ַ���s��ʼ��
    string str1("hello string");
    cout<<str1<<endl;//"hello string"

    //string(int n, char c);//ʹ��n���ַ�c��ʼ��
    string str2(10,'H');
    cout<<str2<<endl;//"HHHHHHHHHH"

    string str3 = str2;
    cout<<str3<<endl;//"HHHHHHHHHH"

    string str4;
    //string& operator=(const string &s);//���ַ���s������ǰ���ַ���
    str4 = str1;
    cout<<str4<<endl;//"hello string"

    //string& operator=(const char* s);//char*�����ַ��� ��ֵ����ǰ���ַ���
    string str5;
    str5 = "hello str5";
    cout<<str5<<endl;//"hello str5"

    //string& operator=(char c);//�ַ���ֵ����ǰ���ַ���
    string str6;
    str6 ='H';
    cout<<str6<<endl;//"H"

    //string& assign(const char *s);//���ַ���s������ǰ���ַ���
    string str7;
    str7.assign("hello str7");
    cout<<str7<<endl;//"hello str7"

    //string& assign(const char *s, int n);//���ַ���s��ǰn���ַ�������ǰ���ַ���
    string str8;
    str8.assign("hello str8", 5);
    cout<<str8<<endl;//"hello"

    //string& assign(const string &s);//���ַ���s������ǰ�ַ���
    string str9;
    str9.assign(str8);
    cout<<str9<<endl;//"hello"

    //string& assign(int n, char c);//��n���ַ�c������ǰ�ַ���
    string str10;
    str10.assign(10,'W');
    cout<<str10<<endl;//"WWWWWWWWWW"

    //string& assign(const string &s, int start, int n);//��s��start��ʼn��
    string str11;
    str11.assign("hehehahahaxixi", 4, 6);
    cout<<str11<<endl;//"hahaha"
}
/*
3.1.2.3 string��ȡ�ַ�����
char& operator[](int n);//ͨ��[]��ʽȡ�ַ�
char& at(int n);//ͨ��at������ȡ�ַ�
*/

void test02()
{
    string str1="hello string";
    cout<<str1[1]<<endl;//'e'
    cout<<str1.at(1)<<endl;//'e'

    str1[1]='E';
    cout<<str1<<endl;//"hEllo string"
    str1.at(7) = 'T';
    cout<<str1<<endl;//"hEllo sTring"

    //[]��at������
    try
    {
        //str1[1000]='G';//Խ�� []���׳��쳣
        str1.at(1000)='G';//Խ�� at���׳��쳣
    }
    catch(exception &e)
    {
        cout<<"�쳣:"<<e.what()<<endl;
    }
}

/*
3.1.2.4 stringƴ�Ӳ���
string& operator+=(const string& str);//����+=������
string& operator+=(const char* str);//����+=������
string& operator+=(const char c);//����+=������
string& append(const char *s);//���ַ���s���ӵ���ǰ�ַ�����β
string& append(const char *s, int n);//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
string& append(const string &s);//ͬoperator+=()
string& append(const string &s, int pos, int n);//���ַ���s�д�pos��ʼ��n���ַ����ӵ���ǰ�ַ�����β
string& append(int n, char c);//�ڵ�ǰ�ַ�����β���n���ַ�c
*/
void test03()
{
    string str1="hello";
    string str2=" string";
    //string& operator+=(const string& str);//����+=������
    str1 += str2;
    cout<<str1<<endl;//"hello string"

    string str3="hello";
    //string& operator+=(const char* str);//����+=������
    str3 += " string";
    cout<<str3<<endl;//"hello string"

    string str4="hello";
    //string& append(const char *s, int n);//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
    str4.append("hehehaha",4);
    cout<<str4<<endl;//"hellohehe"

    //string& append(const string &s, int pos, int n);//���ַ���s�д�pos��ʼ��n���ַ����ӵ���ǰ�ַ�����β
    string str5="hello";
    string str6="hehehahaha";
    str5.append(str6,4,6);
    cout<<str6<<endl;//"hellohahaha"
}

/*
3.1.2.5 string���Һ��滻
int find(const string& str, int pos = 0) const; //����str��һ�γ���λ��,��pos��ʼ����
int find(const char* s, int pos = 0) const;  //����s��һ�γ���λ��,��pos��ʼ����
int find(const char* s, int pos, int n) const;  //��posλ�ò���s��ǰn���ַ���һ��λ��
int find(const char c, int pos = 0) const;  //�����ַ�c��һ�γ���λ��
int rfind(const string& str, int pos = npos) const;//����str���һ��λ��,��pos��ʼ����
int rfind(const char* s, int pos = npos) const;//����s���һ�γ���λ��,��pos��ʼ����
int rfind(const char* s, int pos, int n) const;//��pos����s��ǰn���ַ����һ��λ��
int rfind(const char c, int pos = 0) const; //�����ַ�c���һ�γ���λ��
string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
string& replace(int pos, int n, const char* s); //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
*/

#include<string.h>
void test04()
{
    //int find(const string& str, int pos = 0) const; //����str��һ�γ���λ��,��pos��ʼ����
    string str1="hehe:haha:xixi:haha:heihei";
    //��str1����haha
    string tmp="haha";
    cout<<str1.find(tmp)<<endl;//5
    cout<<str1.find(tmp,10)<<endl;//15

    //int find(const char* s, int pos = 0) const;  //����s��һ�γ���λ��,��pos��ʼ����
    cout<<str1.find("haha")<<endl;//5

    str1.replace(5,4,"###");
    cout<<str1<<endl;//"hehe:###:xixi:haha:heihei"

    string str2="www.sex.117114.sex.person.77.com";
    //���󣺽��ַ����е�����"sex"��***����
    int ret = 0;
    while((ret = str2.find("sex")) < str2.size())
    {
        str2.replace(ret,strlen("sex"),"***");
    }
    cout<<str2<<endl;
}
/*
3.1.2.6 string�Ƚϲ���
compare������>ʱ���� 1��<ʱ���� -1��==ʱ���� 0��
�Ƚ����ִ�Сд���Ƚ�ʱ�ο��ֵ�˳����Խǰ���ԽС��
��д��A��Сд��aС��

int compare(const string &s) const;//���ַ���s�Ƚ�
int compare(const char *s) const;//���ַ���s�Ƚ�
*/

void test05()
{
    string str1="hehe";
    string str2 = "haha";
    cout<<str1.compare(str2)<<endl;//1
    cout<<str1.compare("lala")<<endl;//-1
    cout<<str1.compare("hehe")<<endl;//0
}

/*
3.1.2.7 string�Ӵ�
string substr(int pos = 0, int n = npos) const;//������pos��ʼ��n���ַ���ɵ��ַ���
*/
void test06()
{
    string str1="hehehe:ha:xixixi:lalala:heihei";
    //cout<<str1.substr(5,4)<<endl;

    //����:��:�ָ�������ַ�����ȡ����
    int pos = 0;

    while(1)
    {
        int ret = str1.find(":",pos);
        if(ret < 0)
        {
            string tmp = str1.substr(pos, str1.size()-pos);
            cout<<tmp<<endl;
            break;
        }

        string tmp = str1.substr(pos, ret-pos);
        cout<<tmp<<endl;

        pos = ret+1;
    }
}
/*
3.1.2.8 string�����ɾ������
string& insert(int pos, const char* s); //�����ַ���
string& insert(int pos, const string& str); //�����ַ���
string& insert(int pos, int n, char c);//��ָ��λ�ò���n���ַ�c
string& erase(int pos, int n = npos);//ɾ����Pos��ʼ��n���ַ�
*/

void test07()
{
    string str1="hello world";
    str1.insert(5,"hehe");
    cout<<str1<<endl;//"hellohehe world

    str1.erase(5,4);//ɾ���ַ�����hehe
    cout<<str1<<endl;//"hello world"

    //����ַ��� str1.size()�õ��ַ������ܴ�С
    str1.erase(0,str1.size());
    cout<<str1.size()<<endl;//0
}

void test08()
{
    string str1;//����
    char *str2 ="hello str";

    //��char * ת�� string ��ֱ����ɣ�
    str1 = str2;
    cout<<str1<<endl;//hello str

    string str3="hello str3";
    //����ֱ�ӽ�string ת���� char * �������string�е�c_str�������
    //char *str4 = str3;//err
    char *str4 = const_cast<char *> (str3.c_str());
    cout<<str4<<endl;//"hello str3"
}
int main(int argc, char *argv[])
{
    test08();
    return 0;
}
