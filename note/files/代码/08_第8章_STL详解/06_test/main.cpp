#include <iostream>
#include<time.h>
using namespace std;

int main(int argc, char *argv[])
{
    //�������������time(NULL)��ȡ��ǰʱ��
    srand(time(NULL));

    for(int i=0;i<10; i++)
    {
        //rand()�����ķ���ֵ���������
        int num = rand();
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}
