#include <stdio.h>

double max(double num_1, double num_2, double num_3);

int main(){
	double num_1, num_2, num_3, result;

	printf("実数a:");
	scanf("%lf",&num_1);
	printf("実数b:");
	scanf("%lf",&num_2);
	printf("実数c:");
	scanf("%lf",&num_3);

	result = max(num_1, num_2, num_3);
	printf("最大値:%f\n",result);
}

double max(double num_1, double num_2, double num_3){
	double max_num = num_1;

	if(max_num < num_2){
		max_num = num_2;
	}
	if(max_num < num_3){
		max_num = num_3;
	}

	return max_num;
}