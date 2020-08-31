/*
길이가 10인 배열을 선언하고 총 10개의 정수를 입력 받는다.
단, 입력받은 정수가 홀수이면 배열의 앞에서부터 채워나가고
짝수일 경우에는 배열의 뒤에서부터 채워나간다.
 */
#include <stdio.h>
void main(){
    int num[10]; // 입력 받은 정수 저장 변수
    int save_num[10]; // 조건에 따라 정수를 저장할 변수
    int front = 0; // 앞에서부터 채울 때 카운트 할 변수
    int back = 9; // 뒤에서부터 채울 때 카운트 할 변수
    // num에 정수 입력 받기
    for(int i=0; i<10; i++){
        printf("입력: ");
        scanf("%d", &num[i]);

        if(num[i]%2  == 1) // 홀수  인경우
        {
            save_num[front] = num[i];
            front++;
        }
        else // 짝수 인경우
        {
            save_num[back] = num[i];
            back--;
        }
    }
    for(int i=0; i<10; i++){
        printf("%d", save_num[i]);
    }
}
