// arr_string

#include<stdio.h>

int main() {

	/*char a[] = {'a','b','c','d','\0'}; //치기 귀찮으니까 다른 방법 알려줌*/


	/*char greeting[] = "hello world!";
	printf("%s\n", greeting);

	// 정수 여러 개를 선언하기 귀찮아서 배열을 쓴 건데
	// 배열 > 정수형 배열, 문자형 배열[특이함] %s 사용해서 greeting을 한 번에 넣는 것도 가능


	// 만약에 위에서 알파벳 o를 뽑고 싶으면
	printf("%c\n", greeting[4]);


	// 만약에 hello world! 에서 알파벳 e를 대문자로 만들려면?
	greeting[1] = 'E';
	printf("%s\n", greeting);*/


	// 문자열 생성
	char coffee[20]; //20글자 문자열이야 라고 선언함
	printf("커피 메뉴 입력 :");
	scanf("%s", &coffee);
	printf("입력하신 커피 메뉴 %s 입니다.", coffee);




	return 0;
}