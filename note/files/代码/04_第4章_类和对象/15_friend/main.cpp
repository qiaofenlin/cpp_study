#include <iostream>
#include <string>
using namespace std;
//������
class Room
{
    //��goodGayVisit��Ϊ�����Ԫ����
    //goodGayVisit ���� ������������ ���� ��������ĳ�Ա
    friend void goodGayVisit(Room &room);
private:
    string bedRoom;//����
public:
    string sittingRoom;//����
public:
    Room()
    {
        this->bedRoom = "����";
        this->sittingRoom="����";
    }
};

// ��ͨȫ�ֺ��� ��Ϊ �����Ԫ
//�û��� ���� �ҵķ���
void goodGayVisit(Room &room)
{
    cout<<"�û��ѷ��������"<<room.sittingRoom<<endl;
    cout<<"�û��ѷ��������"<<room.bedRoom<<endl;//ok
}
void test01()
{
    Room myRoom;
    goodGayVisit(myRoom);
}
int main(int argc, char *argv[])
{
    test01();
    return 0;
}
