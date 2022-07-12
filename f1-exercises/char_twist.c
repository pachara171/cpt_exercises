#include<stdio.h>
//char twist

char char_twist(char c);

int main() {
	
	char c;
	do{
		printf("Char:");
		scanf(" %c", &c);
		if(c >= 65 && c <= 122) {
			if(c >= 91 && c <= 96){
				break;
			}
			printf(" =%c\n", char_twist(c));
		}
		else{
			break;
		}
	} while(c >= 65 && c <= 122);
	printf(" End.");
	
	return 0;
}

char char_twist(char c){
	if(c >= 97){
		return c - 32;
	}
	else if(c < 97){
		return c + 32;
	}
}


