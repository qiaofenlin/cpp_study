#include <iostream>

using namespace std;

class Complex{
public:
    Complex(int flag){
        this->flag = flag;
    }
    Complex& operator+=(Complex& complex){
        this->flag = this->flag + complex.flag;
        return *this;
    }
    bool operator&&(Complex& complex){
        return this->flag && complex.flag;
    }
public:
    int flag;
};
int main(){

    Complex complex1(0);  //flag 0
    Complex complex2(1);  //flag 1

    //ԭ�������Ӧ�ô����������㣬���Ϊ�٣����˳����㣬���Ϊ��
    //���ȴ�ǣ������㣨complex1+complex2�������£�complex1��flag��Ϊcomplex1+complex2��ֵ�� complex1.a = 1
    // 1 && 1
    //complex1.operator&&(complex1.operator+=(complex2))
    if (complex1 && (complex1 += complex2)){
        //complex1.operator+=(complex2)
        cout << "��!" << endl;
    }
    else{
        cout << "��!" << endl;
    }

    return EXIT_SUCCESS;
}
