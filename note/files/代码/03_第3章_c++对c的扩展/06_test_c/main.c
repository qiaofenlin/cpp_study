#include <stdio.h>
struct stu
{
    int num;
    char name[32];
/* c���� �������ڽṹ����  �����Ա����
    void func(void)
    {
        printf("���ǽṹ���е�func");
    }
    */
};
void test01()
{
    //C���Ա����struct
    struct stu lucy = {100, "lucy"};
}

void test02()
{
    int a = 10;
    int b = 20;
    printf("C����:%d\n", a>b?a:b);//20

    //a>b?a:b������ ��ֵ�����ܱ���ֵ��
    //a>b?a:b = 100;//err���ܱ���ֵ
}

//��fun.c�е�num��������(��Ҫ��ֵ)
extern const int num;

void test03()
{
    printf("num = %d\n",num);
    //num = 200;//err numֻ��

    //C������const ���α����� ˵��������Ϊֻ�����û�����ͨ��������data���и�ֵ��
    const int data = 100;//�ֲ�ֻ������ �ڴ���ջ�����ڴ�ɶ���д��
    //data = 200;//err

    printf("data = %d\n",data);
    //���ǣ����֪��data�ĵ�ַ ����ͨ����ַ��ӵ��޸�data����Ӧ�ռ������
    int *p = (int *)&data;
    *p = 2000;
    printf("data = %d\n",data);//ok 200
}
//int num1;

int main(int argc, char *argv[])
{
    //test03();
    extern int data5;
    printf("data5 = %d\n",data5);

    int data5 = 1000;
    return 0;
}
int num1;
