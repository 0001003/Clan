// 1. ������ �Է� �ް�, ���� �µ� ���� ǥ��
// 
// 2. �� ���� ���� ������ �Է� �޾� �������踦 ����ϴ� ���α׷�
// ex) 4,2�� ������ 2*2 = 4    / 3,9�� ������ 3*3 =9   /   4,3�� ������ none ���
// 3. 5���� ������ �Է� �޾�, ����� ������ ���� ���ϴ� ���α׷�
// ex) 2 5 -12 0 32 > 39 ���   /   0 -1 -3 -5 -7 > 0 ���

#include<stdio.h>

int main() {
	
	// 1.
	int degree;
	printf("�µ� �Է� :");
	scanf("%d", &degree);

	if (degree < 0) {
		printf("�߿�Ƿ� �ǳ� Ȱ�� ����\n"); //\n �� ��� ��
	}
	else if (0 <= degree < 40) {
		printf("�ǿ� Ȱ�� ����");
	}
	//else if(degree > 40){
	//		printf("����Ƿ� �ǳ� Ȱ�� ����"); << �ڵ尡 ���ư��⸸ �ϸ� ��
	else {
		printf("����Ƿ� �ǳ� Ȱ�� ����");
	}


	// 2.
	int num1, num2;
	printf("���� �� �� �Է� :");
	scanf("%d %d", &num1, &num2);

	if (num1 * num1 == num2) {
		printf("%d * %d = %d\n", &num1, &num1, &num2); // \n
	}
	// else if�� �� ����
	else if (num2 * num2 == num1) {
		printf("%d * %d = %d\n", &num2, &num2, &num1); // \n
	}


	else {
		printf("none\n"); // \n
	}
		




	// 3.
	int n1, n2, n3, n4, n5;
	printf("���� 5�� �Է� :");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

	//if (n1, n2, n3, n4, n5 > 0) {
	//	//����� ������ ���� ���Ϸ��� �Է�
	//	printf("")


	// ����� �ֵ��� ��ƾ� �ϴ� ���ο� ������ �ʿ���
	int total; // int �ֵ��̶� ��� �ڵ� ¥�� �� ����
	if (n1 > 0) total += n1;
	if (n2 > 0) total += n2;
	if (n3 > 0) total += n3;
	if (n4 > 0) total += n4;
	if (n5 > 0) total += n5;

	printf("���� :%d", total);



	}




	return 0;
}