#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int random_1, random_2;

	srand((unsigned)time(NULL));
	random_1 = rand() % 10 + 1;
	do{
		random_2 = rand() % 10 + 1;
	}while(random_1 == random_2);
	printf("1以上10以下の異なる2つの整数:%d,%d\n",random_1, random_2);
}