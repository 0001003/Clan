//char_double_arr.cpp

#include<stdio.h>

int main() {

	char name[] = "megastudy";

	char megastudy[4][10] = { //20글자 미만인 애들이 4개가 있다는 뜻
		"math",
		"english",
		"koreran",
		"computer"
	};
	printf("%s\n", megastudy[0]);
	printf("%s\n", megastudy[1]);

	//유저에게 커피 메뉴를 세 가지 입력 받고 그 메뉴를 모두 출력하는 프로그램을 만들어보기

	char c1, c2, c3;

	printf("커피 종류 세 가지 입력 :");
	scanf("%c", &c1, &c2, &c3);



	char coffee[3][20] = {
		"americano",
		"latte",
		"hotchoco"
	};

	// ---

	/* char coffee[3][20];
	scanf("%s", &coffee[0]);
	scanf("%s", &coffee[1]);
	scanf("%s", &coffee[2]); */ // scanf값으로 그냥 입력 받으면 이렇게 되는데 비효율적이니까 for문 활용해서 우선 한다.

	for (int i = 0; i < 3; i++) {
		printf("%d번째 메뉴 입력 :", i + 1); //1번째 메뉴는 할 때 사용자에게만 1번째로 보이면 되니까 i+1을 %d값에 넣어주면 된다.
		scanf("%s", &coffee[i]);
		}
	for (int i = 0; i < 3; i++) {
		printf("%d번째 메뉴는 %s\n", i, coffee[i]);

		}





	return 0;
}