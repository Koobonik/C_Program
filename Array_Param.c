#include <stdio.h>
void ShowArayElem(int * param, int len)    
    {
        int i;
        for(i=0; i<len; i++)
        {
            printf("%d", param[i]); // 배열 요소들을 출력
        }
        printf("\n");
    }
void main()
{
    int arr1[3] = { 1, 2, 3 }; // 배열 선언
    int arr2[5] = { 4, 5, 6, 7, 8}; // 배열 선언
    ShowArayElem(arr1, sizeof(arr1) / sizeof(int)); // arr1 배열을 파라미터로 보내고 길이는 3임
    ShowArayElem(arr2, sizeof(arr2) / sizeof(int)); // arr2 배열을 파라미터로 보내고 길이는 5임
}
