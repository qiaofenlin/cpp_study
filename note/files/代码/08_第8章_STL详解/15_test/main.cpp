#include <iostream>
#include<string>
#include<unistd.h>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
class Speaker
{
public:
    string name;
    int score[3];
public:
    Speaker()
    {
        ;
    }
    Speaker(string name)
    {
        this->name=name;
        memset(score,0,sizeof(score));
    }
};
void createSpeaker(vector<int> &v, map<int,Speaker> &m)
{
    string tmp="ABCDEFGHIJKLMNOPQRSTUVWX";
    for(int i=0;i<24;i++)
    {
        //���ѡ�ֱ��
        v.push_back(100+i);

        //��š����,ѡ�֡�
        string name =  "ѡ��";
        name += tmp[i];
        m.insert(make_pair(i+100, Speaker(name)));
    }
}
#include<time.h>
#include<deque>
void speech_contest(int index,vector<int> &v, map<int,Speaker> &m, vector<int> &v1);
void printSpeechResault(int index,vector<int> &v, map<int,Speaker> &m, vector<int> &v1);
int main(int argc, char *argv[])
{
    //����24��ѡ�֡���ѡ��<���,ѡ��>����map������ ѡ�ֱ�ŷ�vector<>������
    vector<int> v;//ѡ�ֱ��
    map<int, Speaker> m;//<���,ѡ��>

    //����ѡ��24��
    createSpeaker(v, m);

    //��������
    srand(time(NULL));

    //��һ�֣��μӵ�ѡ�ֳ�ǩ
    random_shuffle(v.begin(),v.end());
    //���е�һ�ֱ���
    //1��ʾ��ǰ����  vѡ�ֱ��  mѡ����Ϣ  v1��������
    vector<int> v1;
    speech_contest(1, v, m, v1);
    //��ӡ��һ�ֱ�����������в�������ĳɼ�  ����������
    printSpeechResault(1, v, m, v1);

    //�ڶ��ֱ������μӵ�ѡ�ֳ�ǩ
    random_shuffle(v1.begin(),v1.end());
    //���еڶ��ֱ���
    //1��ʾ��ǰ����  vѡ�ֱ��  mѡ����Ϣ  v1��������
    vector<int> v2;
    speech_contest(2, v1, m, v2);
    //��ӡ��һ�ֱ�����������в�������ĳɼ�  ����������
    printSpeechResault(2, v1, m, v2);

    //�ڶ��ֱ������μӵ�ѡ�ֳ�ǩ
    random_shuffle(v2.begin(),v2.end());
    //���еڶ��ֱ���
    //1��ʾ��ǰ����  vѡ�ֱ��  mѡ����Ϣ  v1��������
    vector<int> v3;
    speech_contest(3, v2, m, v3);
    //��ӡ��һ�ֱ�����������в�������ĳɼ�  ����������
    printSpeechResault(3, v2, m, v3);

    return 0;
}
#if 1
 void printSpeechResault(int index,vector<int> &v, map<int,Speaker> &m, vector<int> &v1)
 {
     cout<<"��"<<index<<"�ֱ����ɼ�����"<<endl;
     int count = 0;
     int n = 0;
     vector<int>::iterator mit=v1.begin();
     for(vector<int>::iterator it=v.begin(); it!=v.end(); it++)
     {
         if(count%6 == 0)
         {
             n = count/6+1;
             cout<<"��"<<n<<"��ĳɼ�����:"<<endl;
         }
         count++;

         cout<<"����:"<<m[*it].name<<", �÷�:"<<m[*it].score[index-1]<<endl;

         //ÿ����ĳɼ���ӡ�� �����ӡ��������
         if(count%6 == 0)
         {
             cout<<"��"<<n<<"��Ľ�����������:"<<endl;
             for(int i=0;i<3;i++,mit++)
             {
                 cout<<"����:"<<m[*mit].name<<", �÷�:"<<m[*mit].score[index-1]<<endl;
             }
         }
     }
 }
#endif
#if 1
void speech_contest(int index,vector<int> &v, map<int,Speaker> &m, vector<int> &v1)
{
    int count= 0;
    //���һ��<����,���>��map���� ���ÿһ��ġ���������š�
    multimap<int,int, greater<int>> m2;

    //ѡ����һ��̨����
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        count++;
        //*it ����һ��ѡ�ֱ��
        //10����ί���
        deque<int> d;
        for(int i=0;i<10;i++)
        {
            int score = rand()%41+60;//60~100
            d.push_back(score);
        }
        //��d��������
        sort(d.begin(),d.end());
        //ȥ����߷� �Լ���ͷ�
        d.pop_back();
        d.pop_front();
        //��ȡ�ܷ���
        int sum = accumulate(d.begin(),d.end(),0);
        //��ƽ���� ����ֵ��ѡ�ֵ�score[index-1]
        //map<int,Speaker>
        int avg = sum/d.size();
        (m[*it]).score[index-1] = avg;

        m2.insert(make_pair(avg, *it));

        if(count % 6 == 0)//�պ��Ѿ���6�� �������6�˵ĳɼ�ȡǰ3
        {
            //90 80 70 60 50 40
            //����m2���� ȡ��ǰ3���� ���
            int i=0;
            for(multimap<int,int, greater<int>>::iterator mit=m2.begin();\
                mit!=m2.end() && i<3 ;mit++,i++)
            {
                //�������ı�� �������������v1��
                v1.push_back( (*mit).second );
            }

            //����һ���m2���
            m2.clear();//���
        }
    }
}
#endif
