//i input ����  o output��� stream�� ���������ͷ�ļ�������stdio.h��
#include <iostream>
//#include<string.h>//�ɵķ��
#include<cstring>//c++��C���Ե�ͷ�ļ��ķ��
//std(��׼) ʹ�ñ�׼�������ռ�
using namespace std;

//����ֻ��һ�������� �����ж����������
int main(int argc, char *argv[])
{
    //cout ��� ���� c���Ե�printf
    //endl ���� c���Ե�  ���з�
    // printf("Hello ���!\n");

    //cout���������豸
    cout << "Hello ���!" << endl;//���ַ�������� ����̨

    //cin������������豸
    int num =0;
    cin >> num;//����������������� ��ֵ�� num
    cout<<"num = "<<num<<endl;

    char buf[128]="";
    strcpy(buf,"hello string");
    cout<<buf<<endl;

    return 0;
}
