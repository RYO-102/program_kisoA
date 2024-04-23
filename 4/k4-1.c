#include <stdio.h>

int main()
{
	/*変数宣言*/
	int year;

	/*値の入力*/
	printf("生まれた年(西暦):");
	scanf("%d",&year);

	/*判定部*/
	if(year <= 1988){
		printf("昭和以前に生まれました\n");
	}else if(year == 1989){
		printf("昭和か平成に生まれました\n");
	}else if((1990 <= year) && (year <= 2018)){
		printf("平成に生まれました\n");
	}else if(year == 2019){
		printf("平成か令和に生まれました\n");
	}else if((2020 <= year) && (year <= 2024)){
		printf("令和に生まれました\n");
	}else{
		printf("まだ生まれていません\n");
	}
}