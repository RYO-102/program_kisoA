#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/*変数宣言*/
	int random, answer;

	/*乱数*/
	srand((unsigned)time(NULL));
	random = rand() % 6 + 1;

	do{
		/*答えの入力*/
		printf("1〜6の数:");
		scanf("%d",&answer);

		/*大小の判断*/
		if(answer > random){
			printf("もっと小さい数です\n");
		}else if(answer < random){
			printf("もっと大きい数です\n");
		}
	}while(answer != random);	//答えと出力した乱数が一致するまで続行
	printf("正解です\n");
}