#include<stdio.h>

int main() {
	//switch

	//int num;
	//printf("���� �Է� :");
	//scanf("%d", &num);


	//switch (num) {
	//	case 1:
	//		printf("�Ƹ޸�ī�� �ֹ�\n");
	//		break; // �� break�� ��� �Ѵ�
	//	case 2:
	//		printf("�� �ֹ�\n");
	//		break;
	//	case 3:
	//		printf("�ٴҶ� �ֹ�\n");
	//		break;
	//	default:
	//		printf("�ش� ���� �����ϴ�.\n");
	//		break;
	//}


	// �������� 1~12���� �Է��ϰ�
	// 1~3 : ��, 4~6 : ����, 7~9 : ����, 10~12 : �ܿ� �̶�� ���α׷� �����

	/*int num, spr, sum, fall, win;
	printf("�� �Է� :");
	scanf("%d", &num);

	switch (num) {
	case 1:
	}
	*/

	//��

	int month;
	printf("�� �Է� :");
	scanf("%d", &month);

	switch (month) {
	case 1:
		printf("��");
		break;
	case 2:
		printf("��");
		break;
	case 3:
		printf("��");
		break;
	case 4:
		printf("����");
		break;
	case 5:
		printf("����");
		break;
	case 6:
		printf("����");
		break;
	case 7:
		printf("����");
		break;
	case 8:
		printf("����");
		break;
	case 9:
		printf("����");
		break;
	case 10:
		printf("�ܿ�");
		break;
	case 11:
		printf("�ܿ�");
		break;
	case 12:
		printf("�ܿ�");
		break;
	}



	return 0;
}