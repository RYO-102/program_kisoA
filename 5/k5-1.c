#include <stdio.h>

int main()
{
	int month;

	printf("生まれた月:");
	scanf("%d",&month);

	switch(month){
		case 1:
		case 2:
		case 12:
			printf("冬に生まれました\n");
			break;
		case 3:
		case 4:
		case 5:
			printf("春に生まれました\n");
			break;
		case 6:
		case 7:
		case 8:
			printf("夏に生まれました\n");
			break;
		case 9:
		case 10:
		case 11:
			printf("秋に生まれました\n");
			break;
		default:
			printf("範囲外の値が入力されています\n");
			break;
	}
}