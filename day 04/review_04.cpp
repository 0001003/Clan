// �빮�� > �ҹ���
// �ҹ��� > �빮��

#include<stdio.h>

int main() {

	//char up_word;

	//printf("�빮�� �Է� : ");
	//scanf("%c", &up_word);
	//printf("%c", up_word + 32);
	//
	//char low_word;

	//printf("�ҹ��� �Է� : ");
	//scanf("%c", )

	char big;
	printf("�빮�� �Է� : ");
	scanf("%c", &big);
	getchar();
	printf("�빮�� %c�� �ҹ��� %c�Դϴ�.\n", big, big + 32);

	char small;
	printf("�ҹ��� �Է� : ");
	scanf("%c", &small);
	getchar();
	printf("�ҹ��� %c�� �빮�� %c�Դϴ�.", small, small - 32);





	return 0;
}