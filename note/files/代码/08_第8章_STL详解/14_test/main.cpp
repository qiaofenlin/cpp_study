#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
void test01()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);
    v2.push_back(8);

    vector<int> v3;
    //Ԥ�ȣ�����v3�Ĵ�С
    v3.resize(v1.size()+v2.size());

    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());

    for_each(v3.begin(),v3.end(),[](int val){cout<<val<<" ";});
    cout<<endl;
}
#include<time.h>
void test02()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);

    //srand��������
    srand(time(NULL));

    for_each(v1.begin(),v1.end(),[](int val){cout<<val<<" ";});
    cout<<endl;

    //��Ҫ���� srand
    random_shuffle(v1.begin(),v1.end());

    for_each(v1.begin(),v1.end(),[](int val){cout<<val<<" ";});
    cout<<endl;
}
void test03()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    for_each(v1.begin(),v1.end(),[](int val){cout<<val<<" ";});
    cout<<endl;//1 3 5 7

    reverse(v1.begin(),v1.end());

    for_each(v1.begin(),v1.end(),[](int val){cout<<val<<" ";});
    cout<<endl;//7 5 3 1
}
#include<iterator>
void test04()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);

    vector<int> v2;
    //Ԥ�ȣ����ô�С
    v2.resize(v1.size());

    copy(v1.begin(),v1.end(),v2.begin());

    for_each(v2.begin(),v2.end(),[](int val){cout<<val<<" ";});
    cout<<endl;//1 3 5 7

    //copy��һ�£���copy���(�˽�)
    copy(v2.begin(),v2.end(), ostream_iterator<int>(cout," ") );
}
void test05()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);

    //�������е�3�滻��3000
    replace(v1.begin(),v1.end(),3,3000);
    copy(v1.begin(),v1.end(), ostream_iterator<int>(cout," ") );
    cout<<endl;

    vector<int> v2;
    v2.push_back(1);
    v2.push_back(3);
    v2.push_back(5);
    v2.push_back(7);
    //�������Ĵ���3�滻��3000
    replace_if(v2.begin(),v2.end(),  bind2nd(greater<int>(),3) , 1000 );
    copy(v2.begin(),v2.end(), ostream_iterator<int>(cout," ") );
    cout<<endl;
}
void test06()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);

    int sum = accumulate(v1.begin(),v1.end(),1000);
    cout<<"sum = "<<sum<<endl;//1016
}
#include<iterator>
void test07()
{
    vector<int> v;
    v.resize(5);

    fill(v.begin(),v.end(), 100);

    copy(v.begin(),v.end(), ostream_iterator<int>(cout," ") );
    cout<<endl;
}
void test08()
{
    vector<int> A;
    A.push_back(1);
    A.push_back(3);
    A.push_back(5);
    A.push_back(7);
    A.push_back(9);

    vector<int> B;
    B.push_back(7);
    B.push_back(9);
    B.push_back(2);
    B.push_back(4);
    B.push_back(6);

    //�󽻼�
    vector<int> v1;//��Ž���
    v1.resize(min(A.size(),B.size()));

    vector<int>::iterator myEnd= set_intersection(A.begin(),A.end(),B.begin(),B.end(), v1.begin());
    copy(v1.begin(), myEnd, ostream_iterator<int>(cout," ") );
    cout<<endl;

    //�󲢼�
    vector<int> v2;//��Ų���
    v2.resize(A.size()+B.size() );
    myEnd = set_union(A.begin(),A.end(),B.begin(),B.end(), v2.begin());
    copy(v2.begin(), myEnd, ostream_iterator<int>(cout," ") );
    cout<<endl;

    //�� A �� B
    vector<int> v3;//��Ų���
    v3.resize( A.size() );
    myEnd = set_difference(A.begin(),A.end(),B.begin(),B.end(), v3.begin());
    copy(v3.begin(), myEnd, ostream_iterator<int>(cout," ") );
    cout<<endl;

    //�� B �� A
    vector<int> v4;//��Ų���
    v4.resize( B.size() );
    myEnd = set_difference(B.begin(),B.end(),A.begin(),A.end(), v4.begin());
    copy(v4.begin(), myEnd, ostream_iterator<int>(cout," ") );
    cout<<endl;
}
int main(int argc, char *argv[])
{
    test08();
    return 0;
}
