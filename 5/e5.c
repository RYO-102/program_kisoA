#include <stdio.h>

int main()
{
	int num, i;

	printf("3〜20の整数:");
	scanf("%d",&num);

	if((3 <= num) && (num <= 20)){
		for(i = 1; i <= num; i++){
			printf("%d ",i);
		}
		printf("\n");
	}else{
		printf("範囲外の値が入力されています\n");
	}
}