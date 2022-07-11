#include<stdio.h>
//array_adding

void array_adding(int a[], int b[], int len);
void array_input(int a[], int len, int set);

int main() {
	
	int arrayadding[3][5], i;
	
	for(i = 0; i < 3; i++){
		array_input(arrayadding[i], 5, i+1);
	}
	
	for(i = 1; i < 3; i++){
		array_adding(arrayadding[0], arrayadding[i], 5);
	}
	
	printf("=");
	
	for(i = 0; i < 5; i++){
		printf("%d  ", arrayadding[0][i]);
	}
	
	return 0;
}

void array_input(int a[], int len, int set){
	
	int i;
	for(i = 0; i < len; i++){
		printf("S%d-%02d: ", set, i + 1);
		scanf("%d", &a[i]);
	}
	
}

void array_adding(int a[], int b[], int let){
	
	int i;
	
	for(i = 0; i < 5; i++){
		a[i] += b[i];
	}
}

