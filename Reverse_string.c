/*
 문자열을 받으면 거꾸로 출력해 줄 것임
*/

#include <stdio.h>
#include <string.h>

void main(){
    char string[50]; // 입력받은 문자열을 저장할 변수
    char reverse_string[50]; // 거꾸로 입력되는 문자열을 저장할 변수
    int string_length;
    int count = 0;
    printf("문자열을 입력해주세요 : ");
    scanf("%[^\n]s", string);
    string_length = strlen(string);

    for(int i = string_length - 1; i >= 0; i--){
        reverse_string[count] = string[i];
        count++;
    }
    printf("%s\n",reverse_string);


}
