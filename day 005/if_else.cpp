#include<stdio.h>

int main() {

	//int num;
	//printf("정수 입력 :");
	//scanf("%d", &num);

	//if (num > 0) {
	//	printf("양수입니다.\n");

	//}
	////"0"도 표현해주고 싶어!
	//else if (num == 0) {
	//	printf("0입니다.\n");
	//}
	//else {
	//	printf("0 또는 음수입니다.\n");
	//}

	//int eng;
	//printf("점수 입력 :");
	//scanf("%d", &eng);
	
	//if (eng >= 90) {
	//	printf("A입니다.");
	//}
	//
	//else if (80 <= eng < 90) {
	//	printf("B입니다.");
	//}
	//

	//else if (80 <= eng < 90) {
	//	print("B입니다.");
	//else (eng <= 50) {
	//	printf("낙제입니다.");


	// 답

	/*if (100> eng && eng >= 90) {
		printf("A입니다\n");
	}
	else if (90 > eng && eng >= 80) {
		printf("B입니다\n");
	}
	else if (80 > eng && eng >= 70) {
		printf("c입니다\n");
	}
	else {
		printf("탈락입니다\n");
	}*/




	//국영수 평균 90 이상 a 80 이상 b 70이상 c 그 밑 탈락

	int korean, english, math;
	printf("국어, 영어, 수학 점수 입력 :");
	scanf("%d %d %d", &korean, &english, &math); // scanf %d 사이에 쉼표 넣으면 안 됨 그냥 띄어쓰기만


	int avg = (korean + english + math) / 3;
	if (90 <= avg) {
		printf("A입니다.\n");
	}
	else if (90 > avg && avg >= 80) {
		printf("B입니다.\n");
	}
	else if (80 > avg && avg >= 70) {
		printf("C입니다.\n");
	}
	else {
		printf("탈락입니다.");
	}



	int num;
	printf("정수 입력:");
	scanf("%d", &num);


	//중첩 ifans(nested if문)
	if (num > 0) {
		if (num == 10) {
			printf("10입니다.");
		}
		else {
			printf("양의 정수입니다.");
		}
	}

	// 어떤 정수를 입력하면
	// 양의 홀수, 양의 짝수, 0, 음의 홀수, 음의 짝수를 나타내는 프로그램

	//int a;
	//
	//if (a > 0 && a % 2 == 1) {
	//	printf("양의 홀수입니다.\n");
	//}
	//else if (a > 0 && a % 2 == 0) {
	//	printf("양의 짝수입니다.\n");
	//}

	// 답

	if (num > 0) {
		printf("양의 홀수입니다.\n");
	}
	else if (num < 0) {
	
	}
	else {
		printf()
	}


		return 0;
}