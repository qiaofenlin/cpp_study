#include <iostream>

using namespace std;
class Room;//Room��ǰ����
class GoodGay
{
public:
    void visit1(Room &room);//�˴���Room ���Ϸ� class Room
    void visit2(Room &room);
};


class Room
{
    //����뷽 visit2��ΪRoom�����Ԫ ��ôVisit2�Ϳ��Է��� Room��˽������
    //һ��Ҫ�ǵ� ����������
    friend void GoodGay::visit2(Room &room);
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

void GoodGay::visit1(Room &room)
{
    cout<<"�û���visit1���������"<<room.sittingRoom<<endl;
    //cout<<"�û���visit1���������"<<room.bedRoom<<endl;//���ܷ��� Room˽������
}

void GoodGay::visit2(Room &room)
{
    cout<<"�û���visit2���������"<<room.sittingRoom<<endl;
    cout<<"�û���visit2���������"<<room.bedRoom<<endl;
}

int main(int argc, char *argv[])
{
    Room myRoom;
    GoodGay goodGay;

    goodGay.visit1(myRoom);
    goodGay.visit2(myRoom);

    return 0;
}
