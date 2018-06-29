#include <stdio.h>
void main(){
	int num1 = 10, num2 = 20;
	int * ptr1 = &num1; // 포인터 변수에 num1의 주소값 넣기
	int * ptr2 = &num2; // 포인터 변수에 num2의 주소값 넣기
	(* ptr1) += 10; // num1 에 + 10
	(* ptr2) -= 10; // num2 에 - 10 = 10
	int * ptr3 = ptr1;//임시 변수 num1 에는 현재 10 + 10 이므로 20이 들어갈 것임
	ptr1 = ptr2; // 10 이 들어가고
	ptr2 = ptr3; // 20 이 들어감
	printf("%d %d\n", *ptr1, *ptr2); // 예상 출력 값은 10 20
}
