// quiz_03

// 1. ����� ���� �� �Է�, ����� ���� �� �Է�
// ����� ������ ~�� ~�� �̱���!

// 2. ���ĺ� �ϳ� �Է�: k, p
// kkk ppp
// k k p p		<< ����� �̷� ���·� ������ �ϴ� ���α׷� �����
// kkk ppp


#include<stdio.h>

int main() {

	
	int month;
	printf("���� �Է� :");
	scanf("%d", &month);

	getchar(); // enter ��ü�� ���� Ű����char���� Ư�� ���ڷ� ������ �Ǿ getchar�� �־���� �Ѵ�

	int date;
	printf("���� �Է� :");
	scanf("%d", &date);

	getchar();

	printf("����� ������ %d�� %d�� �̱���!\n\n", month, date);


	char alpha1; // ���� Ű����� char �޾��ִ� �� %c

	printf("���ĺ� �Է� :");
	scanf("%c", &alpha1);


	printf("%c%c%c\n", alpha1, alpha1, alpha1);
	printf("%c %c\n", alpha1, alpha1, alpha1);
	printf("%c%c%c\n", alpha1, alpha1, alpha1);





	return 0;
}