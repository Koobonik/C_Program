#include <stdio.h>

void main()
{
    printf("총 10개의 숫자 입력\n");
    int num[10];
    for(int i=0; i<10; i++)//숫자 입력의 반복 총 10번 실행
    {
        printf("입력: ");
        scanf("%d", &num[i]);//숫자 입력
    }
    
}