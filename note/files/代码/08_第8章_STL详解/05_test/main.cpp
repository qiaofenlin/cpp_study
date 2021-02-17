#include <iostream>
#include<string>
#include<vector>
#include<deque>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
using namespace std;

//ѡ����
class Person
{
public:
    string name;
    int score;
    Person(string name,int score)
    {
        this->name = name;
        this->score =score;
    }
};
void createPerson(vector<Person> &v)
{
    //5��ѡ����ABCDE
    string nameTmp="ABCDE";
    for(int i=0;i<5;i++)
    {
        string name="ѡ��:";
        name += nameTmp[i];

        //��ѡ�ֵ����� ����0 ����vector������
        v.push_back(Person(name,0));
    }
}
void printVectorPerson(vector<Person> &v)
{
    for(vector<Person>::iterator it=v.begin();it!=v.end();it++)
    {
        //*it == Person
        cout<<(*it).name<<" "<<(*it).score<<endl;
    }
}
void playGame(vector<Person> &v)
{
    //�����������
    srand(time(NULL));

    //����v�е�ÿ���� ��һ����
    for(vector<Person>::iterator it=v.begin();it!=v.end();it++)
    {
        //*it == Person
        //ÿλѡ�� ��Ҫ��10����ί��� ����deque������
        deque<int> d;
        for(int i=0;i<10;i++)//10����ί
        {
            int score = rand()%41+60;//60~100
            d.push_back(score);
        }

        //��deque��������ί��10������������
        sort(d.begin(), d.end());//ȥ��һ����ͷ� ��߷�

        //ȥ��һ����ͷ�
        d.pop_front();
        //ȥ��һ����߷�
        d.pop_back();

        //�õ�ÿ��ѡ�ֵ��ܷ���
        int sum = accumulate(d.begin(),d.end(), 0);

        //��ȡƽ���� ��ֵ ѡ�ֵ�score
        (*it).score = sum/d.size();
    }
}
int main(int argc, char *argv[])
{
    //1������һ��vector�������5��ѡ��
    vector<Person> v;
    createPerson(v);

    //2��5��ѡ�� ��һ����
    playGame(v);

    //3����5��ѡ�ֵĳɼ���ӡ����
    printVectorPerson(v);
    return 0;
}
