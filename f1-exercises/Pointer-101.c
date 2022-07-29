#include<stdio.h>
//Pointer-101
int sq(int* a);

int main(){
	int a;
	printf("Enter: ");
	scanf("%d", &a);
	
	printf("= %d", sq(&a));
	
	return 0;
}
int sq(int* a){
	//a = &a;
	
	return *a * *a;
}
