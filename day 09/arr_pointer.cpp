// arr_pointer.cpp

#include<stdio.h>

int main() {

	int a[5] = { 2,4,6,8,10 };
	//// 2�� �������� a[0], 10�� �������� a[4]
	//printf("%d\n", a); // �迭�� ���� �̸��� �ּڰ��̴�.
	//printf("%d\n", a[0]); // ��°��� 2
	//printf("%d\n", &a); // �̰� ���� �ּڰ��� ���´�
	//printf("%d\n", &a[0]); // �̰͵� ���� �ּڰ��� ���´� ��·�� a�ȿ� �ִ� 2�� �ּҰ��� ������~��� �� �Ŵϱ� �κ����� �������� �����ϸ� �� ��
	//
	
	int* pa;
	pa = &a[0];
	printf("%d\n", *pa); //2�� ���´�.
	printf("%d\n", pa); // �ּҰ��� ���´�. * �� ������ ��ü�� �ű� �ּ� �ҷ��ָ� �� ���� �о��ٰ� �ϱ�!!!!

	printf("%d\n", *pa);

	int* pa1;
	pa1 = &a[1];
	printf("%d\n", *pa1);

	int* pa2;
	pa2 = &a[2];
	printf("%d\n", *pa2);


	printf("%d\n", pa);
	printf("%d\n", pa1);
	printf("%d\n", pa2);

	printf("%d\n", *pa);
	printf("%d\n", *pa1);
	printf("%d\n", *pa2);

	return 0;
}