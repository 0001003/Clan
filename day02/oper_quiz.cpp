// quiz

// 1. 정사각형의 한 변의 길이 입력(n)
// n의 길이 정사각형의 넓이는 ~이고, 둘레는 ~이다

//2. 원의 반지름 길이 입력(m)
// m의 반지름 원의 넓이는 ~이고, 둘레는 ~이다

#include<stdio.h>

int main() {

	int side;
	printf("정사각형의 한 변의 길이 입력 : \n");
	scanf("%d", &side);
	printf("한 변의 길이가 %d인 정사각형의 넓이는 %d이고, 둘레는 %d이다.\n", side, side*side, side*4);

	double r;
	printf("원의 반지름 길이 입력\n");
	scanf( "%lf", &r);
	printf("반지름의 길이가 %.2lf인 원의 넓이는 %.2lf이고, 둘레는 %.2lf이다.\n", r, 3.14 * r * r, 2 * 3.14 * r);





	return 0;
}