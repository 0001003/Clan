//quiz_02.cpp

#include<stdio.h>

int main() {
	// 당신의 나이 입력
	// 당신의 키 입력
	// 당신의 학번 입력
	//당신의 나이는 ~이고, 당신의 키는 ~이고, 학번은 ~이군요 << 출력값이 이렇게 나오게끔


	int age;

	printf("나이 입력 : ");
	scanf("%d", &age);
	



	double height; // double은 소수점까지

	printf("키 입력 :");
	scanf("%lf", &height);
	



	int num;
	printf("학번 입력 :");
	scanf("%d", &num);
	
	
	printf("당신의 나이는 %d이고, 당신의 키는 %.2lf 이고, 학번은 %d이군요!", age, height, num);



	return 0;
}