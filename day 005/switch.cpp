#include<stdio.h>

int main() {
	//switch

	//int num;
	//printf("숫자 입력 :");
	//scanf("%d", &num);


	//switch (num) {
	//	case 1:
	//		printf("아메리카노 주문\n");
	//		break; // 꼭 break를 써야 한다
	//	case 2:
	//		printf("라떼 주문\n");
	//		break;
	//	case 3:
	//		printf("바닐라 주문\n");
	//		break;
	//	default:
	//		printf("해당 음료 없습니다.\n");
	//		break;
	//}


	// 유저한테 1~12월을 입력하고
	// 1~3 : 봄, 4~6 : 여름, 7~9 : 가을, 10~12 : 겨울 이라는 프로그램 만들기

	/*int num, spr, sum, fall, win;
	printf("월 입력 :");
	scanf("%d", &num);

	switch (num) {
	case 1:
	}
	*/

	//답

	int month;
	printf("월 입력 :");
	scanf("%d", &month);

	switch (month) {
	case 1:
		printf("봄");
		break;
	case 2:
		printf("봄");
		break;
	case 3:
		printf("봄");
		break;
	case 4:
		printf("여름");
		break;
	case 5:
		printf("여름");
		break;
	case 6:
		printf("여름");
		break;
	case 7:
		printf("가을");
		break;
	case 8:
		printf("가을");
		break;
	case 9:
		printf("가을");
		break;
	case 10:
		printf("겨울");
		break;
	case 11:
		printf("겨울");
		break;
	case 12:
		printf("겨울");
		break;
	}



	return 0;
}