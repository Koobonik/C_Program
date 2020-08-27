#include <stdio.h>
void main(){
    int input; // 입력할 숫자
    int arr[30]; // 배열의 크기
    int count = 0; // 반복문을 몇번 돌려줄지 정해줄 변수
    // 정수 입력 부분
    printf("정수를 입력하세요 : ");
    scanf("%d", &input);
    // 입력값 만큼 반복 
    for(int i = 0; input > 0; i++){
        arr[i] = input%2; // input 값의 2로 나누었을때의 나머지 값을 넣어줌
        input = input/2; // 그리고나서 2로 나누어준 값을 다시 대입
        count++; // 이후 배열을 몇번 반복할지 결정해줄 변수
    }
    // 배열에 담긴값을 출력
    for(int i = count - 1; i >= 0; i--){
        printf("%d", arr[i]);
    }
    printf("\n"); // 출력
}
