/*
 문자열을 받으면 거꾸로 출력해 줄 것임
*/
#include <stdio.h>
#include <string.h>
void main(){
    char string[100]; // 입력받은 문자열을 저장할 변수
    char reverse_string[100]; // 거꾸로 입력되는 문자열을 저장할 변수
    int string_length; // 문자열의 길이를 저장할 변수
    int count = 0; // 이후 reverse_string 에 저장될 문자들을 저장하기 위해 +1 씩 증가될 변수
    printf("문자열을 입력해주세요 : "); // 문자열 입력
    scanf("%[^\n]s", string); // [^\n] 의 기능은 \n을 받기 전까지 계속입력한다는 뜻이다.
    string_length = strlen(string); // 길이 넣기
    // 배열을 뒤집어줄 변수
    for(int i = string_length - 1; i >= 0; i--){ //
        reverse_string[count] = string[i]; // 배열에 뒤집어서 저장중
        count++;
    }
    printf("%s\n",reverse_string); // reverse_string 에 저장된 문자들 출력 
}
