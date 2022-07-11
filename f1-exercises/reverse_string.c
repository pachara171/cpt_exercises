#include<stdio.h>
#include<string.h>
//reverse string

int main() {
	
	char message[127];
	int length, i;
	
	printf("Enter: ");
	scanf("%[^\n]s", &message);
	
	length = strlen(message);
	printf("=");
	
	for(i = length-1; i >= 0; i--){
		printf("%c", message[i]);
	}
	return 0;
}

