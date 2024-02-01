// quiz_03

// 1. 당신의 생일 월 입력, 당신의 생일 일 입력
// 당신의 생일은 ~월 ~일 이군요!

// 2. 알파벳 하나 입력: k, p
// kkk ppp
// k k p p		<< 출력이 이런 형태로 나오게 하는 프로그램 만들기
// kkk ppp


#include<stdio.h>

int main() {

	
	int month;
	printf("생월 입력 :");
	scanf("%d", &month);

	getchar(); // enter 자체가 문자 키워드char에서 특수 문자로 인지가 되어서 getchar를 넣어줘야 한다

	int date;
	printf("생일 입력 :");
	scanf("%d", &date);

	getchar();

	printf("당신의 생일은 %d월 %d일 이군요!\n\n", month, date);


	char alpha1; // 문자 키워드는 char 받아주는 건 %c

	printf("알파벳 입력 :");
	scanf("%c", &alpha1);


	printf("%c%c%c\n", alpha1, alpha1, alpha1);
	printf("%c %c\n", alpha1, alpha1, alpha1);
	printf("%c%c%c\n", alpha1, alpha1, alpha1);





	return 0;
}