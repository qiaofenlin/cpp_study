#include <iostream>

using namespace std;
//����
class Html
{
public:
    void header(void)
    {
        cout<<"��ҳͷ��"<<endl;
    }
    void leftHtml(void)
    {
        cout<<"�����"<<endl;
    }
    //��ҳ���岿��
    void MainBody(){
        cout << "��ҳ��ҳ��������!" << endl;
    }
    //��ҳ�ײ�
    void Footer(){
        cout << "��ҳ�ײ�!" << endl;
    }
private:
    string mTitle; //��ҳ����
};

class IOTHtml:public Html
{
public:
    //��ҳ���岿��
    void MainBody(){
        cout << "����������ҳ!" << endl;
    }
};
class H5:public Html
{
public:
    //��ҳ���岿��
    void MainBody(){
        cout << "H5����ҳ!" << endl;
    }
};
int main(int argc, char *argv[])
{
    IOTHtml ob;
    ob.header();
    ob.leftHtml();
    ob.MainBody();
    ob.Footer();

    H5 ob1;
    ob1.header();
    ob1.leftHtml();
    ob1.MainBody();
    ob1.Footer();
    return 0;
}
