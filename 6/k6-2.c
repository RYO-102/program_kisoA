#include <stdio.h>

int main()
{
	/*変数宣言*/
	int balance, price;

	/*残額の入力*/
	printf("残額:");
	scanf("%d",&balance);

	/*残額が1000より大きいとき継続*/
	while(1000 <= balance){

		/*支払金額の入力*/
		printf("支払金額:");
		scanf("%d",&price);

		/*支払金額が残額を上回っているか判定*/
		if(balance < price){
			printf("残額が足りません!\n");
		}else{
			balance -= price;
			printf("残額は%d円です\n",balance);
		}
	}
	/*終了メッセ*/
	printf("チャージしてください\n");
}