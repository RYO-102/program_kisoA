#include <stdio.h>

int main()
{
	int month;

	printf("生まれた月:");
	scanf("%d",&month);

	switch(month){
		case 1:
			printf("冬に生まれました\n");
			break;
		case 2:
			printf("冬に生まれました\n");
			break;
		case 3:
			printf("春に生まれました\n");
			break;
		case 4:
			printf("春に生まれました\n");
			break;
		case 5:
			printf("春に生まれました\n");
			break;
		case 6:
			printf("夏に生まれました\n");
			break;
		case 7:
			printf("夏に生まれました\n");
			break;
		case 8:
			printf("夏に生まれました\n");
			break;
		case 9:
			printf("秋に生まれました\n");
			break;
		case 10:
			printf("秋に生まれました\n");
			break;
		case 11:
			printf("秋に生まれました\n");
			break;
		case 12:
			printf("冬に生まれました\n");
			break;
		default:
			printf("範囲外の値が入力されています\n");
			break;
	}
}