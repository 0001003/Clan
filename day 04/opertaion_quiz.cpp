// operation_quiz.cpp

// 문제 1. 자릿수 분리하기
//[문제 설명]
// 0-99999 사이의 정수를 입력 받아, 그 숫자의 각 자리수를 분리하여 출력하는 프로그램을 작성해 보세요.
//[결과]
// 12345 > 1만2천3백4십5

#include<stdio.h>

int main() {


	/*int num;

	printf("정수 입력 :");
	scanf("%d", &num);
	
	int a << 뭔가를 넣어야 함 day 3 opertaion 달라고 해야 함 

	printf("%d만 %d천 %d백 %d십 %", num );*/



	// [답]

	int num, one, ten, hundred, thousands, ten_thousands;
	printf("정수 입력(0~99999):");
	scanf("%d", &num);

	ten_thousands = num / 10000;
	thousands = (num % 10000) / 1000;//51923 % 10000 -> 1923
	hundred = (num % 1000) / 100;
	ten = (num % 100) / 10;
	one = num % 10;

	printf("%d만%d천%d백%십%d\n", ten_thousands, thousands, hundred, ten, one);




		// 문제 2. 시간 형태로 변환하기
		// [문제 설명]
		// 양의 정수를 입력 받아, 그 숫자를 시간(분:초) 형태로 변환하여 출력하는 프로그램
		// ex) 661이면 11분 1초로 변환.


		/*int time;

		printf("숫자 입력 : ");
		scanf("%d", &time);



		printf("%분 %초");*/


		//[답]

		int time, min, sec;
		printf("시간 입력 :");
		scanf("%d", &time);

		min = time / 60;
		sec = time % 60;
		printf("%분 %d초\n", min, sec);
	





	return 0;
}

