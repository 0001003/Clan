//scan
//printf() - 출력
//scanf() - 입력
#include<stdio.h>

int main() {

	int a;
	printf("숫자 입력:");
	scanf("%d", &a); // a에 유저가 입력한 값 담기 (a 앞에 & 적어주는 게 굉장히 중요함)
	printf("a의 값은 %d입니다.\n", a); // \n의 위치 ""<< 안에 있어야 함
	


	int b; // b에 뭐가 담겨져 있는지 모른다.
	printf("숫자 입력:");
	scanf("%d", &b);
	printf("b의 숫자는 %d입니다.", b);





	return 0;

}
