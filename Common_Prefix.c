/* 문자열 배열 두개가 주어지면 제일 긴 공통된 접두사의 길이를 구하시오.*/

#include <stdio.h>
#include <string.h> // 문자열 함수 사용
void main(){
    char one_input_string[50]; // 첫번째 문자열이 들어갈 변수
    char two_input_string[50]; // 두번째 문자열이 들어갈 변수
    int compare = 0; // 두 문자열의 숫자를 비교해서 보다 작은수가 들어갈 변수

    printf("첫번째 문자를 입력해주세요 : \n"); 
    scanf("%s", one_input_string); // 첫번째 문자열 입력

    printf("두번째 문자를 입력해주세요 : \n");
    scanf("%s",two_input_string); // 두번째 문자열 입력

    
    // for(int i = 0; i <= compare; i++
}

int compare(int a, int b){
    if(a>=b) // 만약 a가 더 크거나 같다면
    {
        return b; // b 반환
    }
    else
    {
        return a; // a 반환
    }

}
