// ascii

#include<stdio.h>

int main() {

	/*char alpha = 'A';
	printf("alpha: %c\n", alpha);
	printf("alpha: %d\n", alpha);
	
	char alpha2 = 'a';
	printf("alpha: %c\n", alpha2);
	printf("alpha: %d\n", alpha2);*/

	// 1. ���ĺ� �ҹ��ڸ� �Է� ��,
	//	  ���ĺ��� ���� ��Ÿ���� ���α׷�
	//	  ex) a > a�� ������ 0�Դϴ�.
	//		  c > c�� ������ 2�Դϴ�.

	// 2. ����(0-25) �Է� ��,
	//	  ������ ���� ���ĺ� ��Ÿ���� ���α׷�
	//	  ex) 0 > 0��° �빮�ڴ� A�Դϴ�.
	//	  ex) 1 > 1��° �빮�ڴ� B�Դϴ�.


	// 1.
	
	//char alpha;
	//printf("�ҹ��� ���ĺ� �Է� : ");
	//scanf("%c", &alpha);
	//printf("%c�� ������ %d�Դϴ�.", alpha, alpha-97);
	



	// 2.

	//int num;
	//printf("����(0-25) �Է� : ");
	//scanf("%d", &num);
	//printf("%d��° �빮�ڴ� %c�Դϴ�.", num, num + 65);


	// 3. �ҹ��ڸ� �Է� > �빮�ڷ� ���
	//		�Է� : a > A
	//	  �빮�ڸ� �Է� > �ҹ��ڷ� ���
	//		�Է� : A > a


	//char alpha;
	//printf("�ҹ��ڸ� �Է� : ");
	//scanf("%c", &alpha);
	//printf("%c", alpha - 32);

	char alpha2;
		printf("�빮�ڸ� �Է� : ");
		scanf("%c", &alpha2);
		printf("%c", alpha2 + 32);





	return 0;
}