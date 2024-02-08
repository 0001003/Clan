#include<stdio.h>

int main() {

	
	//int a = 1;
	//
	//
	//while (a < 5) { // 1 < 5는 참이기 때문에 실행한다. 계속 실행한다. 그래서 a 설정해서 넣어줌
	//	printf("오늘 설날 전인데 퇴근하죠\n");
	//	a++;
	//}

	//while (1) {      // 또 무한 반복함 탈출하는 방법은
	//	printf("%d\n", a);
	//	if (a == 10) {
	//		break;
	//	}
	//	a++;
	//}

	//// 유저에게 n을 입력 받고 1~n까지의 정수의 합을 나타내세요
	//// while(1) 사용

	//int n;
	//printf("정수 입력 :");
	//scanf("%d", &n); // n == 5

	//int start = 1;
	//int sum = 0;

	//while (1) {
	//	if (start == n) {
	//		sum += start;
	//		break;
	//	}
	//	sum += start;
	//	start++;
	//}

	//printf("%d\n", sum);

	// 정수를 입력 받고 1부터 n까지의 n의 약수들 출력하기
	// 16 -> 1 2 4 8 16

	/*int n;
	printf("정수 입력 :");
	scanf("%d", &n);

	int start = 1;

	while (start < n) {
		if (n % start == 0) {
			printf("%d\n", start);
		}
		start++;
	}

	printf("%d\n", start);*/ //본인 숫자가 안 나와서 숫자 나오게끔하려면 그냥 넣어도 된다.


	// 여러 정수를 입력 받고 0을 입력할 때까지 입력한 정수들의 합을 계산하여 출력하는 프로그램

	/*int n;
	printf("정수 입력 :");
	scanf("%d", &n);*/

	int a = -1;
	int sum = 0;
	while (a != 0) {
		int num;
		printf("정수 입력:");
		scanf("%d", &a);
		sum += a;
	}
	printf("%d\n", sum);











	return 0;
}