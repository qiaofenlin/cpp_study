#include <stdio.h>
int num1;
int main(int argc, char *argv[])
{
    int num2;
    const int num3=10;
    printf("ȫ��&num1 = %u\n",&num1);
    printf(" �ֲ�&num2 = %u\n",&num2);
    printf(" &num3 = %u\n",&num3);


    return 0;
}
