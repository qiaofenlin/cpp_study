#include <iostream>
#include <vector>
using namespace std;
/*
3.2.4.2 vector���ø�ֵ����
assign(beg, end);//��[beg, end)�����е����ݿ�����ֵ������
assign(n, elem);//��n��elem������ֵ������
vector& operator=(const vector  &vec);//���صȺŲ�����
swap(vec);// ��vec�뱾���Ԫ�ػ�����
*/
void printVectorInt(vector<int> &v)
{
    for(vector<int>::iterator it=v.begin(); it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void test01()
{
    vector<int> v1(5,10);
    vector<int> v2;

    //vector& operator=(const vector  &vec);//���صȺŲ�����
    v2 = v1;
    printVectorInt(v2);

    //assign(n, elem);//��n��elem������ֵ������
    vector<int> v3;
    v3.assign(5,100);
    printVectorInt(v3);

    //assign(beg, end);//��[beg, end)�����е����ݿ�����ֵ������
    vector<int> v4;
    v4.assign(v3.begin(), v3.end());
    printVectorInt(v4);

    //swap(vec);// ��vec�뱾���Ԫ�ػ�����
    vector<int> v5(5,20);
    vector<int> v6(10,40);
    printVectorInt(v5);
    printVectorInt(v6);
    v5.swap(v6);
    printVectorInt(v5);
    printVectorInt(v6);
}
/*
3.2.4.3 vector��С����
size();//����������Ԫ�صĸ���
empty();//�ж������Ƿ�Ϊ��
resize(int num);//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
resize(int num, elem);//����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á����������̣���ĩβ����������>�ȵ�Ԫ�ر�ɾ����
capacity();//����������
reserve(int len);//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���
*/
void test02()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    if(v.empty())
    {
        cout<<"v����Ϊ��"<<endl;
    }
    else
    {
        cout<<"�����ǿ�"<<endl;
        cout<<"size = "<<v.size()<<endl;
        cout<<"capacity = "<<v.capacity()<<endl;
        //���� >= size
    }

    printVectorInt(v);//10 20 30 40
    //resize(int num);//����ָ�������ĳ���Ϊnum
    //����Ĳ��� �Զ���0
    v.resize(8);
    printVectorInt(v);//10 20 30 40 0 0 0 0

    //resize(int num, elem);//����ָ�������ĳ���Ϊnum��
    //�������䳤������elemֵ���
    v.resize(10,5);
    printVectorInt(v);//10 20 30 40 0 0 0 0 5 5

    v.resize(2);
    printVectorInt(v);//10 20
}

void test03()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);

    cout<<"size = "<<v.size()<<endl;
    cout<<"capactiy = "<<v.capacity()<<endl;
    printVectorInt(v);

    cout<<"----------------"<<endl;
    v.resize(2);
    cout<<"size = "<<v.size()<<endl;
    cout<<"capactiy = "<<v.capacity()<<endl;
    printVectorInt(v);
}

void test04()
{
    vector<int> v;
    for(int i=0;i<1000;i++)
    {
        v.push_back(i);
    }
    cout<<"size = "<<v.size()<<endl;//1000
    cout<<"capactiy = "<<v.capacity()<<endl;//1024

    //ʹ��reszie���ռ� �ó�10��Ԫ�أ�������?��
    v.resize(10);//�����޸����� ֻ���޸�size
    cout<<"size = "<<v.size()<<endl;//10
    cout<<"capactiy = "<<v.capacity()<<endl;//1024

    //ʹ��swap��������������
    vector<int>(v).swap(v);

    cout<<"size = "<<v.size()<<endl;//10
    cout<<"capactiy = "<<v.capacity()<<endl;//10
}

//reserve(int len);//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���
void test05()
{
    vector<int> v;

    //һ���� �����ռ� �пռ�Ԥ��
    v.reserve(1000);//Ԥ���ռ� 1000��Ԫ��

    int *p = NULL;
    int count = 0;
    for(int i=0;i<1000;i++)
    {
        v.push_back(i);
        if(p != &v[0])
        {
            count++;
            p = &v[0];
        }
    }
    cout<<"������Ѱ�ռ����:"<<count<<endl;
}
/*
3.2.4.4 vector���ݴ�ȡ����
at(int idx); //��������idx��ָ�����ݣ����idxԽ�磬�׳�out_of_range�쳣��
operator[];//��������idx��ָ�����ݣ�Խ��ʱ������ֱ�ӱ���
front();//���������е�һ������Ԫ��
back();//�������������һ������Ԫ��
*/
void test06()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    printVectorInt(v);//10 20 30 40
    cout<<v[2]<<endl;//30
    cout<<v.at(2)<<endl;//30
    //[] Խ�� ���׳��쳣
    //at Խ�� �׳��쳣

    cout<<"front = "<<v.front()<<endl;//10
    cout<<"back = "<<v.back()<<endl;//40
}
/*
3.2.4.5 vector�����ɾ������
insert(const_iterator pos, int count,ele);//������ָ��λ��pos����count��Ԫ��ele.
push_back(ele); //β������Ԫ��ele
pop_back();//ɾ�����һ��Ԫ��
erase(const_iterator start, const_iterator end);//ɾ����������start��end֮���Ԫ��
erase(const_iterator pos);//ɾ��������ָ���Ԫ��
clear();//ɾ������������Ԫ��
*/
void test07()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    printVectorInt(v);//10 20 30 40

    //insert(const_iterator pos, int count,ele);
    //������ָ��λ��pos����count��Ԫ��ele.
    v.insert(v.begin()+2,3,100);
    printVectorInt(v);//10 20 100 100 100 30 40

    //β��ɾ����pop_back();//ɾ�����һ��Ԫ��
    v.pop_back();//��40ɾ����
    printVectorInt(v);//10 20 100 100 100 30

    //erase(const_iterator start, const_iterator end);
    //ɾ����������start��end֮���Ԫ��
    v.erase(v.begin()+2, v.end()-1);
    printVectorInt(v);//10 20 30

    //erase(const_iterator pos);//ɾ��������ָ���Ԫ��
    v.erase(v.begin()+1);//ɾ��20��λ��
    printVectorInt(v);//10 30

    cout<<"size = "<<v.size()<<", capacity = "<<v.capacity()<<endl;

    //clear();//ɾ������������Ԫ��
    v.clear();
    printVectorInt(v);//ɶҲû��
    cout<<"size = "<<v.size()<<", capacity = "<<v.capacity()<<endl;
}
int main(int argc, char *argv[])
{
    test07();
    return 0;
}
