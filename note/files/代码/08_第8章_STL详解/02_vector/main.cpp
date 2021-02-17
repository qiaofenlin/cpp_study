#include <iostream>
#include<vector>
using namespace std;
void test01()
{
    vector<int> v;
    int i=0;
    for(i=0;i<100;i++)
        v.push_back(i);

    cout<<"v������capacity:"<<v.capacity()<<endl;
    cout<<"v�Ĵ�Сsize:"<<v.size()<<endl;
}
void test02()
{
    vector<int> v;
    int *p=NULL;
    int count = 0;//��¼��Ѱ��ַ�Ĵ���

    for(int i=0;i<1000;i++)
    {
        v.push_back(i);
        if(p != &v[0])//���p������&v[0] ˵����Ѱ���µĿռ�
        {
            count++;
            p = &v[0];
        }
    }

    cout<<"��Ѱ��ַ�Ĵ�����"<<count<<endl;
}

void test03()
{
    vector<int> v;
    int *p = NULL;
    int count =0;
    for(int i=0;i<1000;i++)
    {
        if(p != &v[0])
        {
            cout<<"----------"<<count++<<"-----"<<endl;
            p=&v[0];
        }

        v.push_back(i);
        cout<<"cacapity = "<<v.capacity()<<", size = "<<v.size()<<endl;
    }
}
/*
3.2.4.1 vector���캯��
vector<T> v; //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
vector(v.begin(), v.end());//��v[begin(), end())�����е�Ԫ�ؿ���������
vector(n, elem);//���캯����n��elem����������
vector(const vector &vec);//�������캯����
*/
void printVectorInt(vector<int> &v)
{
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void test04()
{
    //vector(n, elem);//���캯����n��elem����������
    vector<int> v1(10,5);
    printVectorInt(v1);

    //vector(v.begin(), v.end());//��v[begin(), end())�����е�Ԫ�ؿ���������
    vector<int> v2(v1.begin()+2, v1.end()-2);
    printVectorInt(v2);

    vector<int> v3(v1);
    printVectorInt(v3);
}
int main(int argc, char *argv[])
{
    test04();
    return 0;
}
