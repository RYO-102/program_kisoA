#include <stdio.h>

int main()
{
	double num_1, num_2, num_3, num_4, num_5, sum, ave, sum_squares, var;

	/*入力部*/
	printf("1個目の実数:");
	scanf("%lf",&num_1);
	printf("2個目の実数:");
	scanf("%lf",&num_2);
	printf("3個目の実数:");
	scanf("%lf",&num_3);
	printf("4個目の実数:");
	scanf("%lf",&num_4);
	printf("5個目の実数:");
	scanf("%lf",&num_5);

	/*計算部*/
	sum = num_1 + num_2 + num_3 + num_4 + num_5;
	ave = sum / 5.0;
	sum_squares = (num_1 * num_1) + (num_2 * num_2) + (num_3 * num_3) + (num_4 * num_4) + (num_5 * num_5);
	var = (sum_squares / 5.0) - (ave * ave);

	/*出力部*/
	printf("合計:%f, 平均:%f\n",sum, ave);
	printf("2乗和:%f, 分散:%f\n",sum_squares, var);
}