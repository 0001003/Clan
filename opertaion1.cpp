// Operator [������]

// ��� ������
// ���� ������
// �� ������
// �� ������
// ----------------
// ���� ������
// - 

#include<stdio.h>

int main() {

	// ���� ������
	// ++, --
	int a = 1;
	a++; //���� 1��ŭ ������ ��
	a++; // 3�� ���´�
	printf("a: %d\n", a);

	a--; // 2�� ���´�
	printf("a: %d\n", a);

	int b = 0;
	printf("b: %d\n", b++); 
	// ���� �����ڴ� ���ķ� ������ ��. ����Ʈb�� ���� �����ְ�, �� �� �� printb�� ���� �� b++ ���� ���´�.
	printf("b: %d\n", b);
	//�ƴ�? ���� ���� b�� ++�� �� �켱 ������ �ϰ� ���� ���� �������� ������
	printf("b: %\n", ++b);

	// ++b: ���� ������
	// b++: ���� ������

	int c = 0;
	printf("c: %d\n", ++c); //1
	printf("c: %d\n", c++); //1
	printf("c: %d\n", ++c); //3




	// ���� ������()
	// (����) ? �� �� : ���� ��

	// ������ ���ĺ��� �Է��ϰ�
	// �빮���̸� ���� 1�� ��� �ƴϸ� 0�� ����ϴ� ���α׷� �����

	/*char alpha;

	printf("���� �Է� :");
	scanf("%c", &alpha);
	
	char
		int */  // �ƽ�Ű�ڵ� ������� ��

	char a;
	printf("���ĺ� �Է� :");
	scanf("%c", &a);
	getchar();

	// �ƽ�Ű�ڵ� 65-90 �����̸� �빮��
	int isCapital = 65 <= a && a >= 90 ? 1 : 0;
	printf("���: %d", isCapital);
	

	// ������ ���� �ϳ��� �Է��ϰ�
	// ���ĺ��̸� ���� 1�� ��� �ƴϸ� 0 ���

	/*char alpha;
	printf("���� �Է� :");
	scanf("%c", &alpha);

	int is

		65 >= alpha && 90 <= alpha, 97 >= alpha && 122 <= alpha*/

	//// ��
	//char b;
	//printf("���� �Է� :");
	//scanf("%c", b);

	//int isAlphabet = (65 <= b && b <= 90) || (98 <= b && b <= 122) ? 1 : 0;
	//printf("��� : %d", isAlphabet);



	//// ���� ���̰� ���� �ʴ�

	//int isCapital = (65 <= b && b <= 90);
	//int isLower = (98 <= b && b <= 122);
	//int isAlphabet = isCapital || isLower;
	//int result = isAlphabet ? 1 : 0;
	//printf("��� : %d", result);

	

	// �޸� ������
	int a, b;


	//sizeof ������
	// + ) int - 4byte, float - 4byte, double - 8byte, char - 1byte

	// �ΰ� : ���� + ��� ���� ����
	// ��ǻ�� : ����(cpu)�̶� ���(ram) ���� ��

	// ���� ��ǻ�� RAM - 16GB
	// int = 4byte ����


	
	// ��ǻ�Ϳ��� ���� ���� ����
	
	// 1bit
	// 8bit = 1byte
	// 1024byte = 1kb
	// 1024kb = 1mb
	// 1024mb = 1gb

	// 1bit ������ �ִٰ� �սô�. �� ������ ������ ������ �� �ۿ� �� ��.
	// 1byte�� ������ 8���� �ִ� ��. ǥ�� ������ 2^8��.

	// int 4byte = 32bit = 2 ^ 32 (0  ~  +-2^31) << �� �� �̻����� int�� ���ڰ� ����� �ʴ´�.


	//int m;
	//printf("������ m: %d\n", sizeof(m)); // �� ������ ũ�Ⱑ �󸶴�?
	//// ������ : 4 << �̷��� ���´�.



	// type casting(�� ��ȯ)
	int n = 10;
	double k = (double)n;







	return 0;
}
