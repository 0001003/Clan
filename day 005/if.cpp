// 프로그램은 위에서 아래로 실행
// 제어문(control statement)

// 1. 조건문 [어떤 조건에 의해서 코드 실행]
// - if, switch
// 2. 반복문 [여러 번 코드 실행]
// - for, while

#include<stdio.h>

int main() {

	// 조건문 - if문
	int num;
	printf("정수 입력 :");
	scanf("%d", &num);

	// if 조건을 넣는다
	if (num > 0) {
		printf("양수입니다.\n");

	}






	if (num % 2 == 1) {

		printf("홀수입니다");


		printf("프로그램 끝");
	}


	// if-else문

	if (num % 2 == 1) {
		printf("홀수입니다.\n");

	}
	else {
		printf("짝수입니다.\n");

	}

	// 숫자를 입력했을 때, 홀수이면 홀수, 짝수이면 짝수 나오게끔

	if (num > 0) {
		printf("양의 정수입니다. \n");
	}
	else {
		printf("0 또는 음의 정수입니다. \n");
	}

	// 0보다 크고 짝수이면 양의 짝수 그게 아니면 정수입니다 출력되게끔

	if (num > 0 && (num % 2) ==0) {
		printf("양의 짝수입니다. \n");
	}
	else {
		printf("정수입니다.\n");
	}

	return 0;
}
