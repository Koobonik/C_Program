#include <stdio.h>
void main(){
	int num1 = 10, num2 = 20;
	int * ptr1 = &num1;
	int * ptr2 = &num2;
	(* ptr1) += 10;
	(* ptr2) -= 10;
	int * ptr3 = ptr1;//임시 변수
	ptr1 = ptr2;
	ptr2 = ptr3;
	printf("%d %d\n", *ptr1, *ptr2);
}
