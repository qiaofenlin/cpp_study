#include <iostream>

using namespace std;

class Data
{
public:
    int num;
public:
    //���캯��(�޲εĹ���)
    Data()
    {
        num = 0;
        cout<<"�޲εĹ��캯�� num = "<<num<<endl;
    }
    //���캯�����вεĹ��죩
    Data(int n)
    {
        num = n;
        cout<<"�вεĹ��캯�� num = "<<num<<endl;
    }
    //�������캯��
    Data(const Data &ob)//const Data &ob = ob1
    {
        //�������캯�� ��ob2���� num����ob2��num
        //ob2.num = ob1.num
        num = ob.num;
        cout<<"��������"<<endl;
    }

    //��������
    ~Data()
    {
        cout<<"�������� num = "<<num<<endl;
    }

};
void test01()
{
    //��ʵ�������� ϵͳ�Զ����ù��캯��
    Data ob;

    //����������ʱ�� �ֲ�����ob ���ͷ� ϵͳ�Զ�������������
}
void test02()
{
    //�����޲� �� Ĭ�Ϲ��� (��ʽ����)
    Data ob1;
    //�����޲ι��� ����ʾ���ã�
    Data ob2 = Data();

    //�����вι��죨��ʽ���ã�
    Data ob3(10);
    //�����вι��죨��ʾ���ã�
    Data ob4 = Data(20);

    //��ʽת���ķ�ʽ �����вι��죨����� ֻ��һ�����ݳ�Ա������������)
    Data ob5 = 30;//ת����Data ob5(30)

    //��������(��ǰ������ �������������ͷ�)
    Data(40);
    cout<<"------"<<endl;
}

void test03()
{
    Data ob1(10);
    cout<<"ob1.num = "<<ob1.num<<endl;

    //���ÿ������캯��������û�  ��ʵ�ֿ������� ϵͳ������Ĭ�ϵĿ������죩
    //Ĭ�ϵĿ�������:���������帳ֵ��ǳ������
    //����û�ʵ���� �������� ϵͳ�������û�ʵ�ֵĿ�������

    Data ob2(ob1);//��ʽ���ÿ������캯��
    cout<<"ob2.num = "<<ob2.num<<endl;

    Data ob3 = Data(ob1);//��ʾ���ÿ������캯��
    cout<<"ob3.num = "<<ob3.num<<endl;

    Data ob4 = ob1;//=��ʽת������
    cout<<"ob4.num = "<<ob4.num<<endl;
}
void test04()
{
    Data ob1(10);//�����вι���
    Data ob2;//�����޲ι���

    ob2 = ob1;//����ĸ�ֵ

    cout<<"ob1.num = "<<ob1.num<<endl;
    cout<<"ob2.num = "<<ob2.num<<endl;
}

void test05()
{
    Data ob1(10);//�вι���

    //���ò��˿������� ��
    //Data(ob1);//Data(ob1) ==> Data ob1; ���ob1�ض���
}
//�������β� ���ں������õ�ʱ�� ���ٿռ�
//�˴���ob �ͻ���ÿ�������
void myPrintData(Data ob)//Data ob = ob1;
{
    cout<<" num = "<<ob.num<<endl;
}

void test06()
{
    Data ob1(10);

    myPrintData(ob1);
}

Data returnData(void)
{
    cout<<"---001---"<<endl;
    Data ob1(10);//�вι���
    cout<<"---002---"<<endl;

    return ob1;
}

void test07()
{
    Data ob2 = returnData();
    cout<<"ob2.num = "<<ob2.num<<endl;

}

void test08()
{
    //���� ��Ϊ��ʵ��������ob1 ���ǿ��ɺ���ob1����
    Data ob1();
}
int main(int argc, char *argv[])
{
    test08();
    return 0;
}
