#include <stdio.h>
void main()
{
    int arr[3] = {11, 22, 33};
    int *ptr = arr; // int *ptr = &arr[0] 과 같은 문장!!
    printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2));

    printf("%d ", *ptr); ptr++; // 출력후 ptr++
    printf("%d ", *ptr); ptr++;
    printf("%d ", *ptr); ptr--; // 출력후 ptr--
    printf("%d ", *ptr); ptr--;
    printf("%d \n", *ptr);
}
