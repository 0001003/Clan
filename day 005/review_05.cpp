// review_05.cpp

// 1. 10000-99999 ������ �Է� �ް� 100�� �ڸ��� ���
//ex) 12345 -> 3
// 2. ���� n�� �Է� �ް� 20~30�̸� 1 ��� �ƴϸ� 0 ���
// 3. ���� ������ �Է� �ް� Ȧ���̸� 1 ��� �ƴϸ� 0 ���
// 4. ���� �ٸ� �� ������ �Է� �ް�, �� ū ���� ���

#include<stdio.h>

int main() {
	

	//// 1.
	//		int num;
	//		printf("10000-99999 ������ ������ �Է� :");
	//		scanf("%d", &num);
	//	
	//		printf("");


	//��
	int n1;

	printf("10000~99999 ������ ���� �Է� :");
	scanf("%d", &n1); //78745
	printf("%d\n", (n1 / 100) % 10); //������ ������ %�� ����Ѵ�




	//// 2.
	//		int n;
	//		printf("������ �Է� :");
	//		scanf("%d", &n);
	//		(20 <= n <= 30 ? 1 : 0);


	//��
	int n2;
	printf("���� �Է� :");
	scanf("%d", &n2);
	printf("%d\n", 20 <= n2 && n2 <= 30 ? 1 : 0);


	//// 3.
	//		int plus_n;
	//		printf("���� ���� �Է� : ");
	//		scanf("%d", plus_n);
	//		// (plus_n)/2 ���� �� ������ 1, 0���� Ȧ¦ ����


	//��
	int n3;
	printf("���� �Է� :");
	scanf("%d", &n3);
	printf("%d\n", n3 % 2 == 1 ? 1 : 0);



	//// 4.
	//		int num1, num2;
	//			printf("���� �� �� �Է� : ");
	//			scanf("%d", &num1, &num2);

	
	//��
	int n4, n5;
	printf("ù ��° ���� :");
	scanf("%d", &n4);
	printf("�� ��° ���� :");
	scanf("%d", &n5);
	printf("%d\n", n4 > n5 ? n4 : n5);








	return 0;
}