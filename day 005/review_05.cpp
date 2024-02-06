// review_05.cpp

// 1. 10000-99999 정수를 입력 받고 100의 자리만 출력
//ex) 12345 -> 3
// 2. 정수 n을 입력 받고 20~30이면 1 출력 아니면 0 출력
// 3. 양의 정수를 입력 받고 홀수이면 1 출력 아니면 0 출력
// 4. 서로 다른 두 정수를 입력 받고, 더 큰 정수 출력

#include<stdio.h>

int main() {
	

	//// 1.
	//		int num;
	//		printf("10000-99999 사이의 정수를 입력 :");
	//		scanf("%d", &num);
	//	
	//		printf("");


	//답
	int n1;

	printf("10000~99999 사이의 정수 입력 :");
	scanf("%d", &n1); //78745
	printf("%d\n", (n1 / 100) % 10); //나머지 연산자 %를 사용한다




	//// 2.
	//		int n;
	//		printf("정수를 입력 :");
	//		scanf("%d", &n);
	//		(20 <= n <= 30 ? 1 : 0);


	//답
	int n2;
	printf("정수 입력 :");
	scanf("%d", &n2);
	printf("%d\n", 20 <= n2 && n2 <= 30 ? 1 : 0);


	//// 3.
	//		int plus_n;
	//		printf("양의 정수 입력 : ");
	//		scanf("%d", plus_n);
	//		// (plus_n)/2 했을 때 나머지 1, 0으로 홀짝 구분


	//답
	int n3;
	printf("정수 입력 :");
	scanf("%d", &n3);
	printf("%d\n", n3 % 2 == 1 ? 1 : 0);



	//// 4.
	//		int num1, num2;
	//			printf("정수 두 개 입력 : ");
	//			scanf("%d", &num1, &num2);

	
	//답
	int n4, n5;
	printf("첫 번째 정수 :");
	scanf("%d", &n4);
	printf("두 번째 정수 :");
	scanf("%d", &n5);
	printf("%d\n", n4 > n5 ? n4 : n5);








	return 0;
}
