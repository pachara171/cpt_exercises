#include<stdio.h>
//Encryption

char enc_char(char c);
int check_char(char c);

int main() {
	char c;
	int state = 1;
	do{
		c = getchar();
		if(c != EOF){
			printf("%c", enc_char(c));
		}
		else{
			state = 0;
		}
	}while(state != 0);
	
	return 0;
}

char enc_char(char c){
	int cs = check_char(c);
	if(cs == 0){
		if(c == 'y' || c == 'z'){
			c = c - 24;
		}
		else{
			c = c + 2;
		}
	}
	else if(cs == 1){
		if(c == 'A'){
			c = c + 25;
		}
		else{
			c = c - 1;
		}
	}
	return c;
}

int check_char(char c){
	if(c >= 'a' && c <= 'z'){
		return 0;
	}
	else if(c >= 'A' && c <= 'Z'){
		return 1;
	}
	else{
		return -1;
	}
}
