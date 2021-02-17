#include <iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
/*
3.8.2 map/multimap����API
3.8.2.1 map���캯��
map<T1, T2> mapTT;//mapĬ�Ϲ��캯��:
map(const map &mp);//�������캯��
3.8.2.2 map��ֵ����
map& operator=(const map &mp);//���صȺŲ�����
swap(mp);//����������������
3.8.2.3 map��С����
size();//����������Ԫ�ص���Ŀ
empty();//�ж������Ƿ�Ϊ��
3.8.2.4 map��������Ԫ�ز���
map.insert(...); //����������Ԫ�أ�����pair<iterator,bool>
map<int, string> mapStu;
// ��һ�� ͨ��pair�ķ�ʽ�������
mapStu.insert(pair<int, string>(3, "С��"));
// �ڶ��� ͨ��pair�ķ�ʽ�������
mapStu.inset(make_pair(-1, "У��"));
// ������ ͨ��value_type�ķ�ʽ�������
mapStu.insert(map<int, string>::value_type(1, "С��"));
// ������ ͨ������ķ�ʽ����ֵ
mapStu[3] = "С��";
mapStu[5] = "С��";
3.8.2.5 mapɾ������
clear();//ɾ������Ԫ��
erase(pos);//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
erase(beg,end);//ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
erase(keyElem);//ɾ��������keyΪkeyElem�Ķ��顣
3.8.2.6 map���Ҳ���
find(key);//���Ҽ�key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ�������/�������ڣ�����map.end();
count(keyElem);//����������keyΪkeyElem�Ķ����������map��˵��Ҫô��0��Ҫô��1����multimap��˵��ֵ���ܴ���1��
lower_bound(keyElem);//���ص�һ��key>=keyElemԪ�صĵ�������
upper_bound(keyElem);//���ص�һ��key>keyElemԪ�صĵ�������
equal_range(keyElem);//����������key��keyElem��ȵ������޵�������������
*/
void myPrintMap01(map<int,string> &m)
{
    for(map<int,string>::const_iterator it=m.begin();it!=m.end();it++)
    {
        //*it == <int,string>
        cout<<"key="<<(*it).first<<", value="<<(*it).second<<endl;
    }
}
void test01()
{
    //���9527--"��ү"  10086-"�ƶ�"   10010--"��ͨ" 10000--"����"
    //intΪ��ֵ������  stringΪʵֵ������
    map<int,string> m;

    //��1�֣�
    m.insert(pair<int,string>(9527,"��ү"));
    //��2�֣�(�Ƽ�)
    m.insert(make_pair(10086,"�ƶ�"));
    //��3��:
    m.insert(map<int,string>::value_type(10010,"��ͨ"));
    //��4�֣���map�������ݵ�ʱ�� �Ƽ�
    m[10000] ="����";//m.insert(make_pair(10000,"����"));

    //m[10] Ѱ��keyΪ10��ʵֵ
    //���ǣ����������û��keyΪ10 ʹ��m[10] �ᴴ��һ��keyΪ10ʵֵΪ�յ� ����
    //�����������keyΪ10  ��ôm[10]����key=10��ʵֵ
    //���飺10�Ǵ��ڵ�
    cout<<m[10]<<endl;

    myPrintMap01(m);
#if 0
    for_each(m.begin(),m.end(),[](pair<int,string> val){
        cout<<"key="<<val.first<<", value="<<val.second<<endl;
    });
#endif

    //ֻ��鿴key==9527 ��ʵֵ  ����֤key�Ǵ��ڵģ�
    cout<<m[9527]<<endl;//"��ү"
    cout<<m[10010]<<endl;//"��ͨ"

    //�������ȷ��keyֵ�Ƿ����
    map<int,string>::const_iterator ret;
    ret = m.find(10086);
    if(ret == m.end())
    {
        cout<<"δ�ҵ���ؽڵ�"<<endl;
    }
    else
    {
        //ret�������key=10086�Ķ���ĵ�����
        cout<<"�ҵ���ؽڵ�:key="<<\
              (*ret).first<<", value="<<(*ret).second <<endl;
    }

}
#include<numeric>//���ٵ��㷨
#include<stdlib.h>
#include<time.h>
void test02()
{
    //��������
    srand(time(NULL));

    //ս��������ս�ӱ��,ս�����ƣ�
    map<int,string> m;
    m.insert(make_pair(1,"RNG"));
    m.insert(make_pair(2,"IG"));
    m.insert(make_pair(3,"WE"));
    m.insert(make_pair(4,"EDG"));

    //ʹ��vector���ս�ӱ��
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    //�����ǩ(ϴ��) ����������Ԫ��˳��
    random_shuffle(v.begin(),v.end());

    //�������
    for_each(v.begin(),v.end(), [&](int val){
        //val����m�����е�keyֵ
        cout<<m[val]<<"ս�ӳ�����"<<endl;
    } );


}

void test03()
{
    //ս��������ս�ӱ��,ս�����ƣ�
    map<int,string> m;
    m.insert(make_pair(1,"RNG"));
    m.insert(make_pair(1,"IG"));

    cout<<m.count(1)<<endl;//2

    multimap<int,string> m1;
    m1.insert(make_pair(1,"RNG"));
    m1.insert(make_pair(1,"IG"));
    cout<<m1.count(1)<<endl;//2
}
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
void createVectorPerson(vector<Person> &v)
{
    v.push_back(Person("Ա��A", 21));
    v.push_back(Person("Ա��B", 23));
    v.push_back(Person("Ա��C", 21));
    v.push_back(Person("Ա��D", 22));
    v.push_back(Person("Ա��E", 21));
}
#include<vector>

void PersonByGroup(vector<Person> &v, multimap<int, Person> &m)
{
    //�����Ա�����䵽 ����������
    for(vector<Person>::iterator it=v.begin();it!=v.end();it++)
    {
        //*it == Person
        cout<<"������"<<(*it).name<<"��Ҫ����Ĳ���:1 2 3"<<endl;
        int operate = 0;
        cin>>operate;
        if(operate >=1 && operate<=3)
        {
            m.insert(make_pair(operate, *it));
        }

    }
}

void showPersonList(multimap<int, Person> &m, int op)
{
    switch (op) {
    case 1:
        cout<<"�з���:"<<endl;
        break;
    case 2:
        cout<<"���Բ�:"<<endl;
        break;
    case 3:
        cout<<"���²�:"<<endl;
        break;
    }

    //ע�⣺m�д�ŵ����ݡ����źš�Ա����Ϣ��
    //ͳ�Ʋ��źŵ�Ԫ�ظ���
    int n = m.count(op);
    cout<<"���ŵ�����������"<<n<<endl;
    //���� multimap��key�Զ����� �ظ�  ��ͬkeyһ������һ��
    multimap<int, Person>::const_iterator ret;
    ret = m.find(op);
    if(ret != m.end())//Ѱ�ҵ�key
    {
        for(int i=0;i<n;i++,ret++)
        {
            //(*ret) == <int, Person>
            //(*ret).second == Person
            cout<<"name = "<<(*ret).second.name<<",age = "<<\
                  (*ret).second.age<<endl;
        }
    }

}
void test04()
{
    //ʹ��vector������Ա����Ϣ�洢����
    vector<Person> v;

    //����5��Ա��
    createVectorPerson(v);

    //��Ա�����䵽��ͬ�Ĳ��ţ�Ա��<���źš�Ա����Ϣ>��
    multimap<int, Person> m;//���Ա��<���źš�Ա����Ϣ>
    PersonByGroup(v, m);

    //�����Ų鿴Ա����Ϣ
    showPersonList(m, 1);
    showPersonList(m, 2);
    showPersonList(m, 3);
}
int main(int argc, char *argv[])
{
    test04();
    return 0;
}
