#include<stdio.h>
//Next Char

char* find_char(char s[], int c);

int main() {
	char str[128];
	char c, *next_c;
	// my comment form khoffan welcome
	printf("S:");
	gets(str);
	printf("C:");
	scanf("%c", &c);
	next_c = find_char(str, c);
	if(next_c != NULL){
		printf("= %c",*next_c);
	}
	else{
		printf("=");
	}	
	return 0;
}
char* find_char(char s[], int c){
	char *i;
	for(i = s; *i != '\0'; i++){
		if(*i == c){
			if(*(i + 1) == '\0'){
				return NULL;
			}
			else{
				return i + 1;
			}
		}
	}
}
