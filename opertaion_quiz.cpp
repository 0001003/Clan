// operation_quiz.cpp

// ���� 1. �ڸ��� �и��ϱ�
//[���� ����]
// 0-99999 ������ ������ �Է� �޾�, �� ������ �� �ڸ����� �и��Ͽ� ����ϴ� ���α׷��� �ۼ��� ������.
//[���]
// 12345 > 1��2õ3��4��5

#include<stdio.h>

int main() {


	/*int num;

	printf("���� �Է� :");
	scanf("%d", &num);
	
	int a << ������ �־�� �� day 3 opertaion �޶�� �ؾ� �� 

	printf("%d�� %dõ %d�� %d�� %", num );*/



	// [��]

	int num, one, ten, hundred, thousands, ten_thousands;
	printf("���� �Է�(0~99999):");
	scanf("%d", &num);

	ten_thousands = num / 10000;
	thousands = (num % 10000) / 1000;//51923 % 10000 -> 1923
	hundred = (num % 1000) / 100;
	ten = (num % 100) / 10;
	one = num % 10;

	printf("%d��%dõ%d��%��%d\n", ten_thousands, thousands, hundred, ten, one);




		// ���� 2. �ð� ���·� ��ȯ�ϱ�
		// [���� ����]
		// ���� ������ �Է� �޾�, �� ���ڸ� �ð�(��:��) ���·� ��ȯ�Ͽ� ����ϴ� ���α׷�
		// ex) 661�̸� 11�� 1�ʷ� ��ȯ.


		/*int time;

		printf("���� �Է� : ");
		scanf("%d", &time);



		printf("%�� %��");*/


		//[��]

		int time, min, sec;
		printf("�ð� �Է� :");
		scanf("%d", &time);

		min = time / 60;
		sec = time % 60;
		printf("%�� %d��\n", min, sec);
	





	return 0;
}

