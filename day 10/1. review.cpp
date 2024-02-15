#include<stdio.h>

int main() {

	// 1. 정수형 변수 a를 선언해서, 포인터를 사용해서 값을 100으로 바꾸기

	int a;
	int* pa;
	pa = &a;
	*pa = 100;

	printf("%d\n", a);


	// 2. 정수형 변수 b,c를 각각 3,5를 초기화하고, 포인터를 사용하여 서로 바꾸기
	
	int b = 3, c = 5, temp; // 임시 공간이 하나 더 있어야 함 차 있는 변수 안에 다른 걸 넣을 수가 없음
	int* p;
	p = &b; //p에 b의 주솟값을 넣음
	temp = *p; //temp == 3 
	p = &c; //주솟값 c
	b = *p; // b == 5
	p = &temp;
	c = *p; // c == 3
	printf("%d %d\n", b, c);


	
	
	
	
	// 3. 정수형 배열 변수 arr[5]를 선언 후, 포인터를 사용해서 3의 배수로 채우기

	int arr[5];
	int* pArr;

	for (int i = 0; i < 5; i++) {
		pArr = &arr[i];
		*pArr = i * 3 + 3; //0부터 시작하니까 3을 더해야 한다	
	}

	for (int i = 0; i < 5; i++) {
		printf("%d", arr[i]);
	}




	return 0;
}