#include <iostream>

using namespace std;
class Cub
{
private://ȷ������
    int m_l;
    int m_w;
    int m_h;
public:
    //m_l m_w m_h��д����
    void setL(int l)
    {
        m_l = l;
    }
    void setW(int w)
    {
        m_w = w;
    }
    void setH(int h)
    {
        m_h=h;
    }

    //m_l m_w m_h�ж�����
    int getL(void)
    {
        return m_l;
    }
    int getW(void)
    {
        return m_w;
    }
    int getH(void)
    {
        return m_h;
    }

    //�������
    int getS(void)
    {
        return 2*(m_l*m_w+m_l*m_h+m_w*m_h);
    }

    //�������
    int getV(void)
    {
        return m_l*m_w*m_h;
    }

    //��Ա�����ж�
    bool myCompareCub2(Cub &ob)//����ڲ� û��Ȩ��֮��
    {
        if(m_l == ob.m_l && m_w == ob.m_w && m_h == ob.m_h)
            return true;

        return false;
    }

};

//ȫ�ֺ���
bool myCompareCub1(Cub &c1, Cub &c2)
{
    //����ⲿ ����ʹ��getL��ȡ����
    if((c1.getL() == c2.getL()) && (c1.getW() == c2.getW()) && (c1.getH() == c2.getH()))
    {
        return true;
    }

    return false;

}
int main(int argc, char *argv[])
{

    Cub cub1;//ʵ����һ������
    cub1.setL(10);
    cub1.setW(10);
    cub1.setH(10);

    //�������
    cout<<"cub1�����:"<<cub1.getS()<<endl;
    //�������
    cout<<"cub1�����:"<<cub1.getV()<<endl;

    Cub cub2;//ʵ����һ������
    cub2.setL(10);
    cub2.setW(20);
    cub2.setH(10);

    //ȫ�ֺ���
    if(myCompareCub1(cub1,cub2) == true)
    {
        cout<<"���"<<endl;
    }
    else
    {
        cout<<"�����"<<endl;
    }

    Cub cub3;
    cub3.setL(10);
    cub3.setW(10);
    cub3.setH(10);
    //��Ա����
    if( cub3.myCompareCub2(cub1) == true)
    {
        cout<<"���"<<endl;
    }
    else
    {
        cout<<"�����"<<endl;
    }

    return 0;
}
