#include <iostream>

using namespace std;
//����һ������
class Base
{
public:
    int a;
private:
    int b;
protected:
    int c;
};

//����һ������
class Son:public Base
{
public:
    //�����е�public����  �������� Ҳ��public
    //�����е�private���� �������� �ǲ��ɼ���
    //�����е�protected���� �������� ��protected��
    //������ڲ�
    void showSon()
    {
        //b = 200;//����ֱ�ӷ���
        c =300;//������ �ڲ��ǿ��Է��ʵ�
    }
};

void test01()
{
    //������ⲿ
    Son ob;
    ob.a = 100;
    cout<<"�����е�public����a = "<<ob.a<<endl;

    //ob.b = 200;//�������� ���ʲ���
    //ob.c = 200;//�������� ���ʲ���

}

//�����̳�
class Son1:protected Base
{
private:

public:
    //�����е�public����  �������� Ҳ��protected
    //�����е�private���� �������� �ǲ��ɼ���
    //�����е�protected���� �������� ��protected��
    //������ڲ�
    void showbase(){
        a = 100;//�����ڲ��ɷ���
        //b = 200;//����ֱ�ӷ���
        c = 300;//�����ڲ��ɷ���
    }
};
void test02()
{
    Son1 ob;
    //ob.a;//�����ⲻ�ɷ���
    //ob.b;//�����ⲻ�ɷ���
    //ob.c;//�����ⲻ�ɷ���
}
//�����̳�
class Son2:private Base
{
private:

public:
    //�����е�public����  �������� Ҳ��private
    //�����е�private���� �������� �ǲ��ɼ���
    //�����е�protected���� �������� ��private��
    //������ڲ�
    void showbase(){
        a = 100;//�����ڲ��ɷ���
        //b = 200;//����ֱ�ӷ���
        c = 300;//�����ڲ��ɷ���
    }
};
void test03()
{
    Son2 ob;
    //ob.a;//�����ⲻ�ɷ���
    //ob.b;//�����ⲻ�ɷ���
    //ob.c;//�����ⲻ�ɷ���
}
int main(int argc, char *argv[])
{
    test03();
    return 0;
}
