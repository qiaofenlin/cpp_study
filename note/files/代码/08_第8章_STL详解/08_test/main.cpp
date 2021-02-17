#include <iostream>

using namespace std;
/*
3.6.4.1 list���캯��
list<T> lstT;//list���ò���ģ����ʵ��,�����Ĭ�Ϲ�����ʽ��
list(beg,end);//���캯����[beg, end)�����е�Ԫ�ؿ���������
list(n,elem);//���캯����n��elem����������
list(const list &lst);//�������캯����
3.6.4.2 list����Ԫ�ز����ɾ������
push_back(elem);//������β������һ��Ԫ��
pop_back();//ɾ�����������һ��Ԫ��
push_front(elem);//��������ͷ����һ��Ԫ��
pop_front();//��������ͷ�Ƴ���һ��Ԫ��
insert(pos,elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
clear();//�Ƴ���������������
erase(beg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�
3.6.4.3 list��С����
size();//����������Ԫ�صĸ���
empty();//�ж������Ƿ�Ϊ��
resize(num);//����ָ�������ĳ���Ϊnum��
�������䳤������Ĭ��ֵ�����λ�á�
���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
resize(num, elem);//����ָ�������ĳ���Ϊnum��
�������䳤������elemֵ�����λ�á�
���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
3.6.4.4 list��ֵ����
assign(beg, end);//��[beg, end)�����е����ݿ�����ֵ������
assign(n, elem);//��n��elem������ֵ������
list& operator=(const list &lst);//���صȺŲ�����
swap(lst);//��lst�뱾���Ԫ�ػ�����
3.6.4.5 list���ݵĴ�ȡ
front();//���ص�һ��Ԫ�ء�
back();//�������һ��Ԫ�ء�
3.6.4.6 list��ת����
reverse();//��ת��������lst����1,3,5Ԫ�أ����д˷�����lst�Ͱ���5,3,1Ԫ�ء�
sort(); //list����
*/
#include<list>
#include<algorithm>
void printListInt(list<int> &L)
{
    for(list<int>::iterator it=L.begin();it!=L.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
}
void test01()
{
    list<int> L;
    L.push_back(10);
    L.push_back(20);
    L.push_back(30);
    L.push_back(40);

    printListInt(L);//10 20 30 40
    //������+n ֻ��������ʵ�����֧��
    //��list�����ĵ�������˫������� ��֧��+n
    //L.insert(L.begin()+2, 3, 100);//err
    list<int>::iterator it = L.begin();
    //++ ������ʵ����� �Լ� ˫������� ��֧��
    it++;
    it++;
    L.insert(it,3,100);
    printListInt(L);//10 20 100 100 100 30 40

    //remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�
    L.remove(100);//ɾ������100
    printListInt(L);//10 20 30 40

    //����ת
    L.reverse();
    printListInt(L);//40 30 20 10

    //sort��ϵͳ�ṩ���㷨 ��֧�� ������ʵ���������֧��list��
    //list��������ʹ��ϵͳ�㷨 list���Լ��ṩ�㷨
    //sort(L.begin(),L.end());
    L.sort();
    printListInt(L);//10 20 30 40
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
