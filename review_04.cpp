// 대문자 > 소문자
// 소문자 > 대문자

#include<stdio.h>

int main() {

	//char up_word;

	//printf("대문자 입력 : ");
	//scanf("%c", &up_word);
	//printf("%c", up_word + 32);
	//
	//char low_word;

	//printf("소문자 입력 : ");
	//scanf("%c", )

	char big;
	printf("대문자 입력 : ");
	scanf("%c", &big);
	getchar();
	printf("대문자 %c는 소문자 %c입니다.\n", big, big + 32);

	char small;
	printf("소문자 입력 : ");
	scanf("%c", &small);
	getchar();
	printf("소문자 %c는 대문자 %c입니다.", small, small - 32);





	return 0;
}