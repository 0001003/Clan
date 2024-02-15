// arr_char_pointer

#include<stdio.h>

int main() {

	char word[4][20] = {    //단어가 4개 있다는 뜻 20글자 미만의
		"korean",
		"japanese",
		"chinese",
		"english",

	};


	char(* p_word)[20];
	p_word = &word[0]; //아까 pointer2에서 했던 매트릭스랑 같은 논리로 같음
	printf("%s\n", p_word[0]);
	printf("%s\n", p_word[1]);

	for (int i = 0; i < 4; i++) {
		printf("%s\n", p_word[i]);
	}










	return 0;
}