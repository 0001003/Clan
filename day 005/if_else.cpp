#include<stdio.h>

int main() {

	//int num;
	//printf("���� �Է� :");
	//scanf("%d", &num);

	//if (num > 0) {
	//	printf("����Դϴ�.\n");

	//}
	////"0"�� ǥ�����ְ� �;�!
	//else if (num == 0) {
	//	printf("0�Դϴ�.\n");
	//}
	//else {
	//	printf("0 �Ǵ� �����Դϴ�.\n");
	//}

	//int eng;
	//printf("���� �Է� :");
	//scanf("%d", &eng);
	
	//if (eng >= 90) {
	//	printf("A�Դϴ�.");
	//}
	//
	//else if (80 <= eng < 90) {
	//	printf("B�Դϴ�.");
	//}
	//

	//else if (80 <= eng < 90) {
	//	print("B�Դϴ�.");
	//else (eng <= 50) {
	//	printf("�����Դϴ�.");


	// ��

	/*if (100> eng && eng >= 90) {
		printf("A�Դϴ�\n");
	}
	else if (90 > eng && eng >= 80) {
		printf("B�Դϴ�\n");
	}
	else if (80 > eng && eng >= 70) {
		printf("c�Դϴ�\n");
	}
	else {
		printf("Ż���Դϴ�\n");
	}*/




	//������ ��� 90 �̻� a 80 �̻� b 70�̻� c �� �� Ż��

	int korean, english, math;
	printf("����, ����, ���� ���� �Է� :");
	scanf("%d %d %d", &korean, &english, &math); // scanf %d ���̿� ��ǥ ������ �� �� �׳� ���⸸


	int avg = (korean + english + math) / 3;
	if (90 <= avg) {
		printf("A�Դϴ�.\n");
	}
	else if (90 > avg && avg >= 80) {
		printf("B�Դϴ�.\n");
	}
	else if (80 > avg && avg >= 70) {
		printf("C�Դϴ�.\n");
	}
	else {
		printf("Ż���Դϴ�.");
	}



	int num;
	printf("���� �Է�:");
	scanf("%d", &num);


	//��ø ifans(nested if��)
	if (num > 0) {
		if (num == 10) {
			printf("10�Դϴ�.");
		}
		else {
			printf("���� �����Դϴ�.");
		}
	}

	// � ������ �Է��ϸ�
	// ���� Ȧ��, ���� ¦��, 0, ���� Ȧ��, ���� ¦���� ��Ÿ���� ���α׷�

	//int a;
	//
	//if (a > 0 && a % 2 == 1) {
	//	printf("���� Ȧ���Դϴ�.\n");
	//}
	//else if (a > 0 && a % 2 == 0) {
	//	printf("���� ¦���Դϴ�.\n");
	//}

	// ��

	if (num > 0) {
		printf("���� Ȧ���Դϴ�.\n");
	}
	else if (num < 0) {
	
	}
	else {
		printf()
	}


		return 0;
}