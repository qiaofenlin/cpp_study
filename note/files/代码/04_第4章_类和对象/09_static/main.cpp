#include <iostream>

using namespace std;
class Data
{
public:
    const static int data;//��̬��Ա����(��������)
public:
    //��̬��Ա����  ������ �������ڶ���
    static int getDataStatic(void)
    {
        //num = 200;//err ��̬��Ա���� ���ܷ�����ͨ��Ա����
        return data;
    }
};

//�����ʱ�� ����Ҫ��static
const int Data::data=100;//���ⶨ��+��ʼ��

void test02()
{
    //����
    cout<<Data::data<<endl;
    //��ֵ
    //Data::data = 200;//err data��̬��Աֻ��
    cout<<Data::data<<endl;
}
#if 0

class Data
{
private:
    int num;//��ͨ��Ա����
    const static int data;//��̬��Ա����(��������)
public:
    //��ͨ��Ա���� ������ ����� ����������
    int getData(void)
    {
        num = 200;//non-static
        return data;//static
    }

    //��̬��Ա����  ������ �������ڶ���
    static int getDataStatic(void)
    {
        //num = 200;//err ��̬��Ա���� ���ܷ�����ͨ��Ա����
        return data;
    }
};

void test01()
{
    //cout<<Data::data<<endl;//err ��̬data��˽�е� ���ⲻ��ֱ�ӷ���
    //cout<< Data::getData()<<endl;//err getData() ����������

    Data ob;
    cout<<ob.getData()<<endl;
    //�������⣺data��̬�� �ڴ�������֮ǰ ���Ѿ�����
    //�����û��ʵ�������� �ѵ� �Ͳ���ʹ��data����
    //����������� ��Ҫ�õ���̬��Ա����

    //1����̬��Ա���� ������ �Ϳ���ͨ��������ֱ�ӷ���
    cout<<Data::getDataStatic()<<endl;

    //2��Ҳ����ͨ�����������ʣ�������̬��Ա������
    cout<<ob.getDataStatic()<<endl;
}
#endif
int main(int argc, char *argv[])
{
    test02();
    return 0;
}
