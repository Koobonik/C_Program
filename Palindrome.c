/*
 회문을 작성할 것임
 앞으로 읽으나 뒤로 읽으나 차이가 없는 단어!
 */

#include <stdio.h>
#include <string.h>

void main(){
    char c[40], d[40]; // 단어를  담을 변수
    int e = 0; // 문자열 뒤집을때 카운트할때 쓰일 변수
    int ret; // 문자열을 strcmp 함수를 이용하여 비교할 때 맞으면 0을 반환함
    printf("문자열 입력 : ");
    scanf("%s", c); // 단어  입력
    printf("입력한 문자열은 %s 입니다\n", c);
    int char_num = strlen(c); // 단어의 길이 계산
    printf("단어의 길이는 %d 입니다.\n", char_num);


    // 문자열을 반대로 저장할 것임
    for(int i= char_num -1; i>=0; i--){ // 배열값은 하나 더 작으므로
        d[e] = c[i];
        e++;
    }

    ret = strcmp(c, d); // 두 단어가 만약 일치한다면 0을 반환할 것임

    if(ret == 0){
        printf("회문입니다.\n");
    }
    else{
        printf("회문이 아니니다.\n");
    }
}

