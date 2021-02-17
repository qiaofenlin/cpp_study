#include <iostream>
#include <deque>
using namespace std;

/*
3.3.3.1 deque���캯��
deque<T> deqT;//Ĭ�Ϲ�����ʽ
deque(beg, end);//���캯����[beg, end)�����е�Ԫ�ؿ���������
deque(n, elem);//���캯����n��elem����������
deque(const deque &deq);//�������캯����
3.3.3.2 deque��ֵ����
assign(beg, end);//��[beg, end)�����е����ݿ�����ֵ������
assign(n, elem);//��n��elem������ֵ������
deque& operator=(const deque &deq); //���صȺŲ�����
swap(deq);// ��deq�뱾���Ԫ�ػ���
*/
void printDequeInt(deque<int> &d)
{
    for(deque<int>::iterator it=d.begin();it!=d.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void test01()
{
    deque<int> d(5,10);
    printDequeInt(d);//10 10 10 10 10

    //assign(n, elem);//��n��elem������ֵ������
    deque<int>  d1;
    d1.assign(5,100);
    printDequeInt(d1);//100 100 100 100 100

    //deque& operator=(const deque &deq); //���صȺŲ�����
    deque<int>  d2;
    d2 = d1;
    printDequeInt(d2);//100 100 100 100 100

    //swap(deq);// ��deq�뱾���Ԫ�ػ���
    deque<int> d3(5,1);
    deque<int> d4(5,2);
    printDequeInt(d3);//1 1 1 1 1
    printDequeInt(d4);//2 2 2 2 2
    d3.swap(d4);
    printDequeInt(d3);//2 2 2 2 2
    printDequeInt(d4);//1 1 1 1 1
}
/*
3.3.3.3 deque��С����
deque.size();//����������Ԫ�صĸ���
deque.empty();//�ж������Ƿ�Ϊ��
deque.resize(num);//����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ�á����������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
deque.resize(num, elem); //����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ��,���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
3.3.3.4 deque˫�˲����ɾ������
push_back(elem);//������β�����һ������
push_front(elem);//������ͷ������һ������
pop_back();//ɾ���������һ������
pop_front();//ɾ��������һ������
3.3.3.5 deque���ݴ�ȡ
at(idx);//��������idx��ָ�����ݣ����idxԽ�磬�׳�out_of_range��
operator[];//��������idx��ָ�����ݣ����idxԽ�磬���׳��쳣��ֱ�ӳ���
front();//���ص�һ�����ݡ�
back();//�������һ������
*/
void test02()
{
    deque<int> d;
    //β������
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);//10 20 30

    //ͷ������
    d.push_front(40);
    d.push_front(50);
    d.push_front(60);
    printDequeInt(d);//60 50 40 10 20 30

    //ͷ��ɾ��
    d.pop_front();//50 40 10 20 30
    //β��ɾ��
    d.pop_back();//50 40 10 20
    printDequeInt(d);//50 40 10 20

    if(d.empty())
    {
        cout<<"d����Ϊ��"<<endl;
    }
    else
    {
        cout<<"d�����ǿ�"<<endl;
        cout<<"size = "<<d.size()<<endl;//4
    }

    //[]���ʵڶ���Ԫ��
    cout<<"d[2] = "<<d[2]<<endl;//10
    cout<<"d.at(2) = "<<d.at(2)<<endl;//10
    cout<<"ͷԪ�� = "<<d.front()<<endl;//50
    cout<<"βԪ�� = "<<d.back()<<endl;//20
}
/*
3.3.3.6 deque�������
insert(pos,elem);//��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
3.3.3.7 dequeɾ������
clear();//�Ƴ���������������
erase(beg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
*/

void test03()
{
    deque<int> d;
    d.insert(d.begin(),5, 100);
    printDequeInt(d);//100 100 100 100 100

    d.clear();
    cout<<"size = "<<d.size()<<endl;//0
}
int main(int argc, char *argv[])
{
    test03();
    return 0;
}
