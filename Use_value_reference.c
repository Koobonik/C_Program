#include <stdio.h>

int SquareByValue(int a)
{
    int s = a * a; // 제곱 반환
    return s;
}

void SquareByReference(int * b) // 인스턴스 자체에 다시 변수 대입
{
    int ss = * b;
    *b = ss * ss;
}

void main()
{
    int num = 30;
    int * para = &num;

    printf("%d \n", SquareByValue(num));
    SquareByReference(&num);
    printf("%d \n", num);
}
