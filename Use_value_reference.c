#include <stdio.h>
int SquareByValue(int a)
{
    return a*a; // 제곱 반환
}
void SquareByReference(int * b) // 인스턴스 자체에 다시 변수 대입
{
    int ss = * b; // * b 가 가리키는 것은 &num의 주소값
    *b = ss * ss;
}
void main()
{
    int num = 30;
    int * para = &num; // num의 주소값을 para 에 대입한다
    printf("%d \n", SquareByValue(num));
    SquareByReference(&num);
    printf("%d \n", num);
}
