#include <stdio.h>

int main()
{
	float num_float;
	double num_double;
	int num_int;

	num_float = 2442102;
	num_double = 2442102;
	num_int = 2442102;

	printf("int型変数の値は%dとなります\n",num_int);
	printf("一方,float型変数の値は%f,double型変数の値は%fとなります\n",num_float, num_double);
}