#include <iostream>

using namespace std;
void test01()
{
   int num = 10;
   int &a = num;//a����num�ı���  a==num

   cout<<"num = "<<num<<endl;//10
   //��a��ֵ == ��num��ֵ
   a=100;
   cout<<"num = "<<num<<endl;//100

   //a��num�ı��� ����num��a������ͬ�ĵ�ַ�ռ�
   cout<<"a �ĵ�ַ:"<<&a<<endl;
   cout<<"num �ĵ�ַ:"<<&num<<endl;
}
void test02()
{
    int arr[5] = {10,20,30,40,50};
    //���󣺸�arr�������
    int (&my_arr)[5] = arr;//my_arr��������arr�ı���

    int i=0;
    for(i=0;i<5;i++)
    {
        cout<<my_arr[i]<<" ";
    }
    cout<<endl;
}
void test03()
{
    int arr[5] = {10,20,30,40,50};
    //1����typedef ���������� ȡ������
    //TYPE_ARR����һ���������ͣ���5��Ԫ�� ÿ��Ԫ��λint��
    typedef int TYPE_ARR[5];

    //myArr��������arr�ı���
    TYPE_ARR &myArr=arr;

    int i=0;
    for(i=0;i<5;i++)
    {
        cout<<myArr[i]<<" ";
    }
    cout<<endl;
}

void my_swap1(int a,int b)
{
    int tmp = a;
    a = b;
    b=tmp;
}
void my_swap2(int *a,int *b)//a=&data1,b =data2;
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void my_swap3(int &a, int &b)//a=data1,b=data2
{
    int tmp = a;
    a = b;
    b= tmp;
}
void test04()
{
    int data1 = 10,data2=20;
    cout<<"data1 = "<<data1<<", data2 = "<<data2<<endl;
    //my_swap1(data1,data2);//����ʧ��
    //my_swap2(&data1,&data2);//�����ɹ�
    my_swap3(data1,data2);//�����ɹ�(�Ƽ�)
    cout<<"data1 = "<<data1<<", data2 = "<<data2<<endl;
}
//������Ϊ�����ķ���ֵ����
int& my_data(void)
{
    int num = 100;
    return num;//err ��������ɶ���� ���þ��Ǹñ����ı���
    //�����ķ���ֵ������ʱ  ��Ҫ���ؾֲ�����
}

int& my_data1(void)
{
    static int num = 200;
    return num;//ok
}
void test05()
{
    //ret�Ǳ��� ret��num�ı���
    int &ret = my_data();
    //cout<<"ret = "<<ret<<endl;//�Ƿ������ڴ�

    int &ret1 = my_data1();//ret1��num�ı���
    cout<<"ret = "<<ret1<<endl;
}

int& my_data2(void)
{
    static int num = 10;
    cout<<"num = "<<num<<endl;

    return num;
}
void test06()
{
    //�����ķ���ֵ ��Ϊ��ֵ
    my_data2() = 2000;

    my_data2();
}

#include<stdlib.h>
#include<string.h>
void my_str1(char **p_str)//p_str = &str
{
    //*p_str == *&str == str
    *p_str = (char *)calloc(1,32);
    strcpy(*p_str, "hello world");

    return;
}
void my_str2(char* &my_str)//char* &my_str = str;my_str�ȼ�str
{
    my_str = (char *)calloc(1,32);
    strcpy(my_str, "hello world");
    return;
}
void test07()
{
    char *str = NULL;
    //���󣺷�װһ������ �Ӷ��� ��str����һ���ռ� ����ֵΪ"hello world"
    //my_str1(&str);
    my_str2(str);
    cout<<"str = "<<str<<endl;
    free(str);
}
typedef struct
{
    int num;
    char name[32];
}STU;
void myPrintSTU1(STU tmp)//��ͨ�ṹ�������Ϊ�β� ����̫��
{
    cout<<sizeof(tmp)<<endl;
    cout<<"ѧ��:"<<tmp.num<<", ����:"<<tmp.name<<endl;
}
void myPrintSTU2(const STU &tmp)//STU &tmp=lucy;tmp��lucy�ı��� tmpû�п��ٶ����ռ�
{
    //tmp.num = 2000;//err ��ΪtmpΪ������
    cout<<"ѧ��:"<<tmp.num<<", ����:"<<tmp.name<<endl;
}
void test08()
{
    STU lucy = {100,"lucy"};

    //����:����һ������ ����lucy��Ա(������)
    myPrintSTU2(lucy);
}

void test09()
{
    //������10ȡ������ ��num
    //int &��Ե���int ��10��const int����
    //const int ��Ե���const int, 10��const int����
    const int &num = 10;

    cout<<"num = "<<num<<endl;//10
}
int main(int argc, char *argv[])
{
    test09();
    return 0;
}
