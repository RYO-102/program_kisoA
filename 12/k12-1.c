#include <stdio.h>
#include <string.h>

int main(){
	char str[81];
	int i;

	printf("文字列:");
	scanf("%s",&str);

	for(i = 0; i < (int)strlen(str); i++){
		if((('A' <= str[i]) && (str[i] <= 'Y')) || (('a' <= str[i]) && (str[i] <= 'y'))){
			str[i] += 1;
		}else if((str[i] == 'Z') || (str[i] == 'z')){
			str[i] -= ('Z' - 'A');
		}
	}

	printf("置換後の文字列:%s",str);
}