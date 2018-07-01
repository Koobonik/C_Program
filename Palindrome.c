/*
 회문을 작성할 것임
 앞으로 읽으나 뒤로 읽으나 차이가 없는 단어!
 */

#include <stdio.h>
#include <string.h>

void main(){
    int str = strlen("hello d"); // 띄어쓰기 포함된다.
    printf("%d\n", str);

    char c[300];
    printf("문자열 입력 : ");
    scanf("%s", c);
    printf("입력한 문자열은 %s 입니다\n", c);
}
