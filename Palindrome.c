/*
 회문을 작성할 것임
 앞으로 읽으나 뒤로 읽으나 차이가 없는 단어!
 */

#include <stdio.h>
#include <string.h>

void main(){
    char c[40]; // 단어를  담을 변수
    printf("문자열 입력 : ");
    scanf("%s", c); // 단어  입력
    printf("입력한 문자열은 %s 입니다\n", c);
    int char_num = strlen(c); // 단어의 길이 계산
    printf("%d\n", char_num);

    if(char_num %2 == 0){ // 단어의 길이가 짝수일 경우
       for(int i = 0; i < char_num; i++){
           if(c[i] == c[char_num - 1]){
               printf("양 끝이 일치합니다.\n");
               char_num--;
           }
       }  
    }
    else{ // 단어의 길이가 홀수일 경우
        
    }
}
