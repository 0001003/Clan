//quiz_02.cpp

#include<stdio.h>

int main() {
	// ����� ���� �Է�
	// ����� Ű �Է�
	// ����� �й� �Է�
	//����� ���̴� ~�̰�, ����� Ű�� ~�̰�, �й��� ~�̱��� << ��°��� �̷��� �����Բ�


	int age;

	printf("���� �Է� : ");
	scanf("%d", &age);
	



	double height; // double�� �Ҽ�������

	printf("Ű �Է� :");
	scanf("%lf", &height);
	



	int num;
	printf("�й� �Է� :");
	scanf("%d", &num);
	
	
	printf("����� ���̴� %d�̰�, ����� Ű�� %.2lf �̰�, �й��� %d�̱���!", age, height, num);



	return 0;
}