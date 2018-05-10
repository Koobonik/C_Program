#include <stdio.h>

int SquareByValue(int a)
{
    int s = a * a;
    return s;
}

void SquareByReference(int * b)
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
