//char_double_arr.cpp

#include<stdio.h>

int main() {

	char name[] = "megastudy";

	char megastudy[4][10] = { //20���� �̸��� �ֵ��� 4���� �ִٴ� ��
		"math",
		"english",
		"koreran",
		"computer"
	};
	printf("%s\n", megastudy[0]);
	printf("%s\n", megastudy[1]);

	//�������� Ŀ�� �޴��� �� ���� �Է� �ް� �� �޴��� ��� ����ϴ� ���α׷��� ������

	char c1, c2, c3;

	printf("Ŀ�� ���� �� ���� �Է� :");
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
	scanf("%s", &coffee[2]); */ // scanf������ �׳� �Է� ������ �̷��� �Ǵµ� ��ȿ�����̴ϱ� for�� Ȱ���ؼ� �켱 �Ѵ�.

	for (int i = 0; i < 3; i++) {
		printf("%d��° �޴� �Է� :", i + 1); //1��° �޴��� �� �� ����ڿ��Ը� 1��°�� ���̸� �Ǵϱ� i+1�� %d���� �־��ָ� �ȴ�.
		scanf("%s", &coffee[i]);
		}
	for (int i = 0; i < 3; i++) {
		printf("%d��° �޴��� %s\n", i, coffee[i]);

		}





	return 0;
}