#include <stdio.h>
void main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int * ptr = &arr[4];
    int total=0;
    int i;
    for(i=0; i<5; i++){
        total += *(ptr--);
    }
    printf("%d", total);
    
}

