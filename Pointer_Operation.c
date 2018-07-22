#include <stdio.h>
int main(void){
	int num1 = 100, num2 = 100;
	int * pnum; // pnum 이라는 포인터 변수 선언
	pnum = &num1;// 포인터 pnum이 num1 을 가리킴
	(*pnum) += 30; // num1 에는 130이 들어간다.
	pnum = &num2; // pnum이 가리키는 것을 num2로 바꾼다
	(*pnum) -= 50; // 50이 들어갈 것임
	printf("num1 : %d , num2 : %d \n", num1, num2); // 130, 50이 출력될 것임
	return 0;
}
