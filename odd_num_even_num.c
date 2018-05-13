#include <stdio.h>

void main()
{
    printf("총 10개의 숫자 입력\n");
    int num[10];//숫자 저장 변수
    int odd_num[10];//홀수 저장 변수
    int even_num[10];//짝수 저장 변수
    int odd = 0;//홀수 카운트 수
    int even = 0;//짝수 카운트 수
    for(int i=0; i<10; i++)//숫자 입력의 반복 총 10번 실행
    {
        printf("입력: ");
        scanf("%d", &num[i]);//숫자 입력
    }
    for(int i=0; i<10; i++)//홀수와 짝수를 구별
    {
        if(num[i]%2 == 0)//짝수일때
        {
            even_num[even] = num[i];
            even++;
            
        }
        else
        {
            odd_num[odd] = num[i];
            odd++;
        }
    }
    printf("짝수 출력 : ");//짝수 출력
    for(int i=0; i<sizeof(even_num); i++)
    {
        printf("%d ", even_num[i]);
    }
    printf("\n");
    printf("홀수 출력 : ");//홀수출력
    for(int i=0; i<sizeof(odd_num); i++)
    {
        printf("%d ", odd_num[i]);
    }
    printf("\n");
}