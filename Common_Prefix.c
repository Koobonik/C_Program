/* 문자열 배열 두개가 주어지면 제일 긴 공통된 접두사의 길이를 구하시오.*/
#include <stdio.h>
#include <string.h> // 문자열 함수 사용
void main(){
    char one_input_string[50]; // 첫번째 문자열이 들어갈 변수
    char two_input_string[50]; // 두번째 문자열이 들어갈 변수
    int compare = 0; // 두 문자열의 숫자를 비교해서 보다 작은수가 들어갈 변수
    int one_length, two_length; // 첫번째, 두번째 문자열이 길이 저장 변수
    char save_string[50];
    int count = 0; // 만약 0이면 일치하는게 없다고 바로 출력을 해주기 위한 변수
    printf("첫번째 문자를 입력해주세요 : \n"); 
    scanf("%s", one_input_string); // 첫번째 문자열 입력
    printf("두번째 문자를 입력해주세요 : \n");
    scanf("%s",two_input_string); // 두번째 문자열 입력
    one_length = strlen(one_input_string); // 길이를 구하는 함수 strlen
    two_length = strlen(two_input_string); //
    if(one_length >= two_length) // 첫번째 수가 더 크다면
    {
        compare = two_length; // 작은수 반환
    }
    else
    {
        compare = one_length; // 아닌경우는 큰 수를  반환
    }
    // 두 수를 비교하여 짧은 수 만큼만 반복할 것임
    for(int i = 0; i < compare; i++)
    {
        if(one_input_string[i] == two_input_string[i])
        {
            save_string[i] = one_input_string[i]; // 저장 변수에 문자 추가
            count++; // 카운트 추가
        }
        else if (count == 0) // 카운트가 올라가지 않으면 일치하는 것이 없다는 뜻
        {
            printf("두 단어가 일치하는 접두사는 없습니다.\n");
            break;
        }
        else // 첫번째 if 문을 만족하지 않는 경우 else 로 와서 그동안 저장되어온 save_string을 출력한다.
        {
            printf("두 글의 접두사는 %s 입니다.\n", save_string);
            break;
        }
    }
}
