// 1. 정수를 입력 받고, 현재 온도 상태 표시
// 
// 2. 두 개의 양의 정수를 입력 받아 제곱관계를 출력하는 프로그램
// ex) 4,2를 넣으면 2*2 = 4    / 3,9를 넣으면 3*3 =9   /   4,3을 넣으면 none 출력
// 3. 5개의 정수를 입력 받아, 양수인 수들의 합을 구하는 프로그램
// ex) 2 5 -12 0 32 > 39 출력   /   0 -1 -3 -5 -7 > 0 출력

#include<stdio.h>

int main() {
	
	// 1.
	int degree;
	printf("온도 입력 :");
	scanf("%d", &degree);

	if (degree < 0) {
		printf("추우므로 실내 활동 권장\n"); //\n 해 줘야 함
	}
	else if (0 <= degree < 40) {
		printf("실외 활동 권장");
	}
	//else if(degree > 40){
	//		printf("더우므로 실내 활동 권장"); << 코드가 돌아가기만 하면 됨
	else {
		printf("더우므로 실내 활동 권장");
	}


	// 2.
	int num1, num2;
	printf("정수 두 개 입력 :");
	scanf("%d %d", &num1, &num2);

	if (num1 * num1 == num2) {
		printf("%d * %d = %d\n", &num1, &num1, &num2); // \n
	}
	// else if를 안 넣음
	else if (num2 * num2 == num1) {
		printf("%d * %d = %d\n", &num2, &num2, &num1); // \n
	}


	else {
		printf("none\n"); // \n
	}
		




	// 3.
	int n1, n2, n3, n4, n5;
	printf("정수 5개 입력 :");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

	//if (n1, n2, n3, n4, n5 > 0) {
	//	//양수인 수들의 합을 구하려면 입력
	//	printf("")


	// 양수인 애들을 담아야 하는 새로운 변수가 필요함
	int total; // int 애들이랑 묶어서 코드 짜는 게 좋음
	if (n1 > 0) total += n1;
	if (n2 > 0) total += n2;
	if (n3 > 0) total += n3;
	if (n4 > 0) total += n4;
	if (n5 > 0) total += n5;

	printf("총합 :%d", total);



	}




	return 0;
}