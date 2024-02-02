// ascii

#include<stdio.h>

int main() {

	/*char alpha = 'A';
	printf("alpha: %c\n", alpha);
	printf("alpha: %d\n", alpha);
	
	char alpha2 = 'a';
	printf("alpha: %c\n", alpha2);
	printf("alpha: %d\n", alpha2);*/

	// 1. 알파벳 소문자를 입력 후,
	//	  알파벳의 순서 나타내는 프로그램
	//	  ex) a > a의 순서는 0입니다.
	//		  c > c의 순서는 2입니다.

	// 2. 정수(0-25) 입력 후,
	//	  정수에 따른 알파벳 나타내기 프로그램
	//	  ex) 0 > 0번째 대문자는 A입니다.
	//	  ex) 1 > 1번째 대문자는 B입니다.


	// 1.
	
	//char alpha;
	//printf("소문자 알파벳 입력 : ");
	//scanf("%c", &alpha);
	//printf("%c의 순서는 %d입니다.", alpha, alpha-97);
	



	// 2.

	//int num;
	//printf("정수(0-25) 입력 : ");
	//scanf("%d", &num);
	//printf("%d번째 대문자는 %c입니다.", num, num + 65);


	// 3. 소문자를 입력 > 대문자로 출력
	//		입력 : a > A
	//	  대문자를 입력 > 소문자로 출력
	//		입력 : A > a


	//char alpha;
	//printf("소문자를 입력 : ");
	//scanf("%c", &alpha);
	//printf("%c", alpha - 32);

	char alpha2;
		printf("대문자를 입력 : ");
		scanf("%c", &alpha2);
		printf("%c", alpha2 + 32);





	return 0;
}