#include<stdio.h>
//enhlish_letter

int main() {
	char c;
	
	do{
		printf("Char: ");
		scanf(" %c", &c);
		if(c >= 65 && c <= 90){
			printf("= %d\n", c - 64);
		}
		else if(c >= 97 && c <= 122){
			printf("= %d\n", c - 96);
		}
	}while((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
	
	printf("End.\n");
	
	
	return 0;
}
