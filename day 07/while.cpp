#include<stdio.h>

int main() {

	
	//int a = 1;
	//
	//
	//while (a < 5) { // 1 < 5�� ���̱� ������ �����Ѵ�. ��� �����Ѵ�. �׷��� a �����ؼ� �־���
	//	printf("���� ���� ���ε� �������\n");
	//	a++;
	//}

	//while (1) {      // �� ���� �ݺ��� Ż���ϴ� �����
	//	printf("%d\n", a);
	//	if (a == 10) {
	//		break;
	//	}
	//	a++;
	//}

	//// �������� n�� �Է� �ް� 1~n������ ������ ���� ��Ÿ������
	//// while(1) ���

	//int n;
	//printf("���� �Է� :");
	//scanf("%d", &n); // n == 5

	//int start = 1;
	//int sum = 0;

	//while (1) {
	//	if (start == n) {
	//		sum += start;
	//		break;
	//	}
	//	sum += start;
	//	start++;
	//}

	//printf("%d\n", sum);

	// ������ �Է� �ް� 1���� n������ n�� ����� ����ϱ�
	// 16 -> 1 2 4 8 16

	/*int n;
	printf("���� �Է� :");
	scanf("%d", &n);

	int start = 1;

	while (start < n) {
		if (n % start == 0) {
			printf("%d\n", start);
		}
		start++;
	}

	printf("%d\n", start);*/ //���� ���ڰ� �� ���ͼ� ���� �����Բ��Ϸ��� �׳� �־ �ȴ�.


	// ���� ������ �Է� �ް� 0�� �Է��� ������ �Է��� �������� ���� ����Ͽ� ����ϴ� ���α׷�

	/*int n;
	printf("���� �Է� :");
	scanf("%d", &n);*/

	int a = -1;
	int sum = 0;
	while (a != 0) {
		int num;
		printf("���� �Է�:");
		scanf("%d", &a);
		sum += a;
	}
	printf("%d\n", sum);











	return 0;
}