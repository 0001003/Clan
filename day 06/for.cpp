// 제어문(control_statement) [코드를 순차적으로 말고 컨트롤함]
// 1. 조건문(if, switch) [조건에 의한 코드 실행]
// 2. 반복문(for, while) [코드를 n번 실행]

// for

#include<stdio.h>

int main() {

	//for (int i = 0; i < 10; i++) {
	//	printf("%d\n", i);
	//}



	////유저한테 숫자(n) 입력 받고, n번까지 나타내는 코드

	//int n;
	//printf("정수 입력 :");
	//scanf("%d", &n);

	//for (int i = 1; i < n; i++) {
	//	printf("%d\n", i);
	//}

	//// 유저한테 숫자(m) 입력 받고, 숫자까지의 누적 합을 나타내는 코드
	//// ex) 5를 넣으면 15, 6을 넣으면 21

	//int m;
	//int total = 0;
	//printf("정수 입력 :");
	//scanf("%d", &m);

	//for (int i = 1; i <= m; i++) {
	//	//답
	//	total += i;
	//	
	//}
	//printf("%d까지의 누적 합 : ", m);


	//// Quiz 1. 정수를 입력 받아 구구단 출력
	//// - 문제 : 정수 n을 입력하면, n에 해당하는 구구단을 출력
	//// ex 5*1 = 5, 5*2 = 10, 5*3 = 15, 5*4 = 20, ...

	//int n;
	//printf("정수 입력 : \n");
	//scanf("%d", &n);
	//
	//for (int i = 1; i <= 9; i++) {
	//	printf("%d단 곱셈 %d", n, n * i);
	//}


	////답
	//
	//int n;
	//printf("정수 입력 : \n");
	//scanf("%d", &n);

	//for (int i = 1; i <= 9; i++) {
	//	printf("%d * %d = %d", n, i, n * i);
	//}







	//// Quiz 2. 영어 알파벳을 순서대로 출력
	//// - 문제 : 영어 알파벳을 A부터 Z까지 순서대로 출력

	//char a,b;
	//
	//for (int e = 1; e <= 26; e++) {
	//	printf("%c %c", a, b);
	//}

	//printf("알파벳 출력");

	//
	////답


	//for (int i = 65; i <= 90; i++) {
	//	printf("%c %c", i, i+32);
	//}

	//printf("알파벳 출력"); // 출력 안 되는데 확인해 볼 것


for (int i = 0; i < 10; i++) {
	if (i == 7) {
		//break; //for문 탈출(switch) 출력값 : 0123456
		//continue; //for문 점프  출력값 : 012345689



	}
	printf("%d", i);


}

// A~K O~Z출력하는 프로그램

//for (int i = 65; i <= 90; i++) {
//	if (i == 75) {
//		printf("%c", i);
//	}
//	else if( i)
//}

//for (int i = 65; i <= 90; i++) {
//	if (76 <= i && i <= 78) {
//		continue;
//	}
//	printf("%c\n", i); // 코드 맞는지 질문하기
//}
//
//// 중첩 for문
//for (int i = 0; i < 3; i++) {
//	for (int j = 0; j < 5; j++) {
//		printf("i: %d, j: %d\n", i, j);
//
//	}
//}



// 1단부터 9단까지 구구단 출력하는 프로그램
// ex) 1*1 = 1, 1*2 = 2, ... 9*9 = 81

for (int i = 1; i <= 9; i++) {
	for (int j = 1; j <= 9; j++){
		printf("%d * %d = %d\n", i, j, i * j);
		}
	}





	return 0;
}

