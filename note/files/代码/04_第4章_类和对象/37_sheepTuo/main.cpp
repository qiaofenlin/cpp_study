#include <iostream>

using namespace std;
class Animal
{
public:
    int data;
};

//Sheep��̳�Animal   ����Animal �����
class Sheep:virtual public Animal
{
public:
};
//Tuo��̳�Animal ����Animal �����
class Tuo:virtual public Animal
{
public:
};

class SheepTuo:public Sheep,public Tuo
{
public:
};
int main(int argc, char *argv[])
{
    SheepTuo st;
    st.data = 200;

    //ͨ��Sheep��vbptr Ѱ��vbptr����������׵�ַ��ƫ����
    //&st == vbptr
    //*(int *)&st sheep �����������ʼλ��
    int off_set = (int)*((int*)(*(int*)&st) + 1);
    cout << off_set << endl;

    //ͨ��sheep��vbptr �� off_set��λ�������׵�ַ
    cout << ((Animal*)((char*)&st + off_set))->data << endl;

    return 0;
}
