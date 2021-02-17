#include <iostream>

using namespace std;
class Animal{};
class Dog:public Animal{};
class Other{};


//��̬ת��static_cast
void test01()
{
    //static_cat ������ ��������
    char ch = 'a';
    double d = static_cast<double>(ch);
    cout<<"d = "<<d<<endl;

    //static_cat ������ �Զ����������ͣ��ṹ�� �ࣩ
    //��ϵ����֮��
    //����ת�� ��ȫ
    Animal *p1 = static_cast<Animal *>(new Dog);
    //����ת��  ��ȫ ����Խ��
    Dog *p2 = static_cast<Dog *>(new Animal);

    // static_cast ���������� ����ص���֮��ת��
    //Animal *p3 = static_cast<Animal *>(new Other);//err
}

//dynamic_cast��̬ת��
void test02()
{
    //1��dynamic_cast��֧�� ��������
    char ch = 'a';
    //double d=dynamic_cast<double>(ch);//err

    //2��dynamic_cast ����ת�� ������ָ�� ָ�� ����ռ� ��ȫ��
    Animal *p1  = dynamic_cast<Animal *>(new Dog);

    //3��dynamic_cast ����ת�� ������ָ�� ָ�� ����ռ� ����ȫ��
    //Dog *p2 = dynamic_cast<Dog *>(new Animal);//��֧�� ����ȫ ��ת��

    //4��dynamic_cast ��֧�� û�й�ϵ�� ����ת��
    //Animal *p3 = dynamic_cast<Animal *>(new Other);//err
}

//����ת��const_cast
void test03()
{
    const int *p = NULL;
    int *p1 = const_cast<int *>(p) ;

    int *p2 = NULL;
    const int *p3 = const_cast<const int *>(p2);

    //const_cast ��֧�� ��ָ������õ�ת��
    const int a = 100;
    //int b = const_cast<int>(a);//err

    int data = 100;
    //�������� ת���� ��ͨ����
    const int &ob = data;
    int &ob2 = const_cast<int &>(ob);
}

void test04()
{

    //reinterpret_cast ��֧�ֻ�����������
    char ch='a';
    //double d = reinterpret_cast<double>(ch);//err

    //reinterpret_cast ֧�� ����ص����ͼ�ת��
    Animal *p1 = reinterpret_cast<Animal *>(new Other);

    //����ת��
    Animal *p2 = reinterpret_cast<Animal *>(new Dog);

    //����ת��
    Dog *p3 = reinterpret_cast<Dog *>(new Animal);

}
int main(int argc, char *argv[])
{
    test04();
    return 0;
}
