// ���α׷��� ������ �Ʒ��� ����
// ���(control statement)

// 1. ���ǹ� [� ���ǿ� ���ؼ� �ڵ� ����]
// - if, switch
// 2. �ݺ��� [���� �� �ڵ� ����]
// - for, while

#include<stdio.h>

int main() {

	// ���ǹ� - if��
	int num;
	printf("���� �Է� :");
	scanf("%d", &num);

	// if ������ �ִ´�
	if (num > 0) {
		printf("����Դϴ�.\n");

	}






	if (num % 2 == 1) {

		printf("Ȧ���Դϴ�");


		printf("���α׷� ��");
	}


	// if-else��

	if (num % 2 == 1) {
		printf("Ȧ���Դϴ�.\n");

	}
	else {
		printf("¦���Դϴ�.\n");

	}

	// ���ڸ� �Է����� ��, Ȧ���̸� Ȧ��, ¦���̸� ¦�� �����Բ�

	if (num > 0) {
		printf("���� �����Դϴ�. \n");
	}
	else {
		printf("0 �Ǵ� ���� �����Դϴ�. \n");
	}

	// 0���� ũ�� ¦���̸� ���� ¦�� �װ� �ƴϸ� �����Դϴ� ��µǰԲ�

	if (num > 0 && (num % 2) ==0) {
		printf("���� ¦���Դϴ�. \n");
	}
	else {
		printf("�����Դϴ�.\n");
	}

	return 0;
}
