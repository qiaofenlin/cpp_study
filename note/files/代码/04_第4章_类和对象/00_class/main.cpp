#include <iostream>

using namespace std;
class Data
{
private:
    //��Ա���� ռ��Ŀռ��С
    int num;//4B
public:

    //��Ա���� ������ ���� ���ⶨ��
    void setNum(int data);
    int getNum(void);
};

//Data��ĳ�Ա����
void Data::setNum(int data)
{
    num = data;
}

int Data::getNum()
{
    return num;
}

void test01()
{
    printf("%d\n",sizeof(Data));//4B

    Data ob;
    ob.setNum(100);
    cout<<"num = "<<ob.getNum()<<endl;
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
