#include <iostream>

using namespace std;
//��Ƶ����
class Point
{
private:
    int m_x;
    int m_y;
public:
    void setX(int x=0)
    {
        m_x = x;
    }
    void setY(int y=0)
    {
        m_y = y;
    }

    int getX(void)
    {
        return m_x;
    }
    int getY(void)
    {
        return m_y;
    }
};

//���Բ����
class circle
{
private:
    Point m_p;//Բ��
    int m_r;//�뾶
public:
    void setR(int r)
    {
        m_r = r;
    }
    int getR(void)
    {
        return m_r;
    }

    void setPoint(int x,int y)
    {
        m_p.setX(x);
        m_p.setY(y);
    }
    Point getPoint(void)
    {
        return m_p;//�õ�Բ��
    }

    //�ж� �� �� Բ��λ��
    void isPointOnCircle(Point &ob)
    {
        //�㵽Բ�ĵľ���
        int distance = (m_p.getX()- ob.getX())*(m_p.getX()- ob.getX())+\
                (m_p.getY()-ob.getY())*(m_p.getY()-ob.getY());
        if(distance < m_r*m_r)
        {
            cout<<"����Բ��"<<endl;
        }
        else if(distance == m_r*m_r)
        {
            cout<<"����Բ��"<<endl;
        }
        else
        {
            cout<<"����Բ��"<<endl;
        }

    }
};
int main(int argc, char *argv[])
{
    //ʵ����һ�������
    Point point;
    point.setX(20);
    point.setY(20);

    //ʵ����һ��Բ�Ķ���
    circle cir;
    cir.setPoint(5,5);//����Բ��
    cir.setR(5);//���ð뾶

    //�жϵ�point �� Բ�Ĺ�ϵ
    cir.isPointOnCircle(point);
    return 0;
}
