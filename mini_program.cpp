#include<stdio.h>

int main() {

	int year;
	
	printf("�¾ �⵵ �Է� : \n");
	scanf("%d", &year);
	printf("����� �� ���̴� %d �Դϴ�\n", 2024-year);


	double num1;
	double num2;
	double num3; // double a,b,c �̷��� �Ἥ ����ȭ ���ѵ� �ȴ�

	//printf("�� ���� �� �Է�:");
	//scanf("%lf %lf %lf, &num1, &num2, &num3);			<< ��� ������ �����̽��� ���缭 �� ��� ��
	
	printf("ù ��° �� �Է� :");
	scanf("%lf", &num1);
	printf("�� ��° �� �Է� :");
	scanf("%lf", &num2);
	printf("�� ��° �� �Է� :");
	scanf("%lf", &num3);
	printf("�� ���� ����� %.2lf�Դϴ�.", (num1 + num2 + num3) / 3);



	double degree;
		printf("���� �µ� �Է� : \n");
		scanf( "%lf", &degree);
		printf("ȭ�� �µ��� %.2lf�Դϴ�.\n", degree * 5.9 + 32);



		double cm;
		printf("Ű �Է� : \n");
		scanf("%lf", &cm);
		double kg;
		printf("������ �Է� : \n");
		scanf("%lf" , &kg);

		printf("BMI�� %lf �Դϴ�.\n", kg / (cm * cm));


		/*double cm, kg;
		printf("Ű�� ������ �Է� : \n");
		scanf("%lf %lf", &cm, &kg);
		printf("BMI�� %lf�Դϴ�.\n", kg / (cm * cm));*/  //  << ����ȭ ��Ŵ

		




	return 0;
}

