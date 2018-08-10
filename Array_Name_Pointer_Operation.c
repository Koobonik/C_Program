#include <stdio.h>
void main(){
    int arr1[3] = {1, 2, 3}; // 배열 3개짜리 선언 그리고 1, 2, 3 으로 변수 초기화
    double arr2[3] = {1.1, 2.2, 3.3}; // 더블형도 변수 선언 가능
    printf("%d %g \n", *arr1, *arr2); // 첫번째 값이 출력될 예정

    *arr1 += 100;
    *arr2 += 120.5;
    printf("%d %g \n", arr1[0], arr2[0]); //101 과 121.6 출력될 예정
}
