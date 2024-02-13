// double_arr

#include<stdio.h>

int main() {

	//int a[3]       //정수형 배열
	//int a[3] = { 3,6,9 };     //정수형 배열 초기화

	//int eng_score[3] = { 50,60,80 };
	//int math_score[3] = { 70,60,90 };

	////배열 안에 배열을 만듦! : 이중배열

	//int a[2] = { 10,20 }; //하면 2개밖에 못 넣는데 {1,2}도 가능
	//int b[2][3] = { {1,2,3},{4,5,6} }; //의 형태로 나옴. {}가 두 개 있고, 그 안에 요소가 3개가 들어갈 수 있음.
	//

	//// eng_score랑 math_score를 하나의 score로 만들어보기

	//int score[2][3] = { {50,60,80},{70,60,90} }; // 직접 50,60,80,70,60,90 넣어줘야 함
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) { // 2와 3의 위치 확인 다시하기
	//		printf("%d\n", score[i][j]);
	//	}
	//}

	// int b에서 모든 수를 출력하려면?
	
	//printf("%d\n", b[0][0]);   // 1
	//printf("%d\n", b[0][1]);   // 2
	//printf("%d\n", b[0][2]);   // 3
	//printf("%d\n", b[1][0]);   // 4
	//printf("%d\n", b[1][1]);   // 5
	//printf("%d\n", b[1][2]);   // 6 

	// 위에 건 수작업으로 다 치는 것
	// 밑에 건 for문으로 돌리면 됨

	
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) { // 2와 3의 위치 확인 다시하기
	//		printf("%d\n", b[i][j]);

	//	} 
	//}

	
	/*
	// 수학 점수의 총합과 영어점수의 총합

	int engSum = 0;
	int mathSum = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 0) {
				engSum += score[i][j];
			}
			else {
				mathSum += score[i][j];
			}
		}
	}

		printf("영어 총합 :%d, 수학 총합 :%d", engSum, mathSum); */

	//  국 수 영 탐
	int score[3][4] = {
		{70,80,80,80},
		{60,70,50,40},
		{70,50,80,60},
	};

	//int avg = 0;
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) { 
	//		printf("%d\n", b[i][j]);

	//답

	int sum = 0;

	for (int i = 0; i < 3; i++) {
		sum += score[i][3];
	}
	/*for (int j = 0; j < 4; j++) {

	} 로도 쓰는 것 가능함 비효율적이니까 */

	printf("탐구의 평균은 %d입니다.\n", sum / 3);


	

	return 0;
}