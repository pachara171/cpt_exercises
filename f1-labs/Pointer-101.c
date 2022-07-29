#include<stdio.h>
//Pointer-101

void to_next(char* cptr);

int main() {
	char c;
	printf("Enter: ");
	scanf("%c", &c);
	to_next(&c);
	
	printf("= %c", c);
	return 0;
}

void to_next(char* cptr){
	//cptr = &c;
	if(*cptr == 'z'){
		*cptr = 'a';
	}
	else{
		*cptr += 1;
	}

}
