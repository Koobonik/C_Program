#include <stdio.h>
/*  주소값을 받아와서 직접 바꾸어줌 */
void Swap(int * ptr1, int * ptr2)
{
    int temp = * ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void main()
{
    int num1 = 10;
    int num2 = 20;
    printf("num1 num2 : %d %d\n", num1, num2);
    Swap(&num1, &num2);//이 부분에서 서로 값을 바꿈
    printf("num1 num2 : %d %d\n", num1, num2);
}