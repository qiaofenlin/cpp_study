#include <iostream>
#include <stack>
using namespace std;
/*
3.4.3.1 stack���캯��
stack<T> stkT;//stack����ģ����ʵ�֣� stack�����Ĭ�Ϲ�����ʽ��
stack(const stack &stk);//�������캯��
3.4.3.2 stack��ֵ����
stack& operator=(const stack &stk);//���صȺŲ�����
3.4.3.3 stack���ݴ�ȡ����
push(elem);//��ջ�����Ԫ��
pop();//��ջ���Ƴ���һ��Ԫ��
top();//����ջ��Ԫ��
3.4.3.4 stack��С����
empty();//�ж϶�ջ�Ƿ�Ϊ��
size();//���ض�ջ�Ĵ�С
*/
void test01()
{
    stack<int> s;
    //��ջ
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    if(s.empty())
    {
        cout<<"ջ����Ϊ��"<<endl;
    }
    else
    {
        cout<<"ջ�����ǿ�"<<endl;
        cout<<"size = "<<s.size()<<endl;
    }

    while(!s.empty())//�ǿ� ����false
    {
       cout<<s.top()<<endl;
       //��ջ
       s.pop();
    }
}
/*
3.5.3.1 queue���캯��
queue<T> queT;//queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ��
queue(const queue &que);//�������캯��
3.5.3.2 queue��ȡ�������ɾ������
push(elem);//����β���Ԫ��
pop();//�Ӷ�ͷ�Ƴ���һ��Ԫ��
back();//�������һ��Ԫ��
front();//���ص�һ��Ԫ��
3.5.3.3 queue��ֵ����
queue& operator=(const queue &que);//���صȺŲ�����
3.5.3.4 queue��С����
empty();//�ж϶����Ƿ�Ϊ��
size();//���ض��еĴ�С
*/
#include<queue>
void test02()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    if(q.empty())
    {
        cout<<"����Ϊ��"<<endl;
    }
    else
    {
        cout<<"�����ǿ�"<<endl;
        cout<<"size = "<<q.size()<<endl;
        cout<<"��ͷԪ�� = "<<q.front()<<endl;//10
        cout<<"��βԪ�� = "<<q.back()<<endl;//40
    }

    cout<<"��������"<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();//����
    }
}
int main(int argc, char *argv[])
{
    test02();
    return 0;
}
