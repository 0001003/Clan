// arr_pointer.cpp

#include<stdio.h>

int main() {

	int a[5] = { 2,4,6,8,10 };
	//// 2를 꺼내려면 a[0], 10을 꺼내려면 a[4]
	//printf("%d\n", a); // 배열의 변수 이름은 주솟값이다.
	//printf("%d\n", a[0]); // 출력값은 2
	//printf("%d\n", &a); // 이것 또한 주솟값이 나온다
	//printf("%d\n", &a[0]); // 이것도 또한 주솟값이 나온다 어쨌든 a안에 있는 2의 주소값을 보여줘~라고 한 거니까 부분집합 개념으로 이해하면 될 듯
	//
	
	int* pa;
	pa = &a[0];
	printf("%d\n", *pa); //2가 나온다.
	printf("%d\n", pa); // 주소값이 나온다. * 이 연산자 자체가 거기 주소 불러주면 그 값을 읽어줄게 니까!!!!

	printf("%d\n", *pa);

	int* pa1;
	pa1 = &a[1];
	printf("%d\n", *pa1);

	int* pa2;
	pa2 = &a[2];
	printf("%d\n", *pa2);


	printf("%d\n", pa);
	printf("%d\n", pa1);
	printf("%d\n", pa2);

	printf("%d\n", *pa);
	printf("%d\n", *pa1);
	printf("%d\n", *pa2);

	return 0;
}