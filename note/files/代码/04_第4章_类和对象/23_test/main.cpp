#include <iostream>

using namespace std;
class Person
{
private:
    int a;
    int b;
public:
    Person():a(0),b(0)
    {
        cout<<"�޲ι���"<<endl;
    }
    Person(int a, int b):a(a),b(b)
    {
        cout<<"�вι���"<<endl;
    }
    void showPerson(void)
    {
        cout<<"a = "<<a<<", b = "<<b<<endl;
    }
    ~Person()
    {
        cout<<"��������"<<endl;
    }
};
void test01()
{
    Person ob1(10,20);
    ob1.showPerson();

    //ע�� �ɶ��� ���¶���ֵ ���õ��ǿ������죨Ĭ�Ͽ���������ǵ����ĸ�ֵ��
    Person ob2 = ob1;//����ط� �ɲ��ǵ��ø�ֵ=�����
    ob2.showPerson();

    Person ob3;
    ob3 = ob1;//�˴����ǵ��õĸ�ֵ=�����(Ĭ�ϸ�ֵ=������ǳ����)
    ob3.showPerson();
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}












