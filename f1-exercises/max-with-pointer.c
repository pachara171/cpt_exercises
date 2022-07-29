#include<stdio.h>
#define NUM 5
//max-with-pointer

int* max(int* a, int *b);

int main(){
	int i, a = 0, b, *ans;
	
	for(i = 0; i < NUM; i++){
		printf("N%d: ", i+1);
		scanf("%d", &b);
		ans = max(&a, &b);
	}
	printf("=%d", *ans);
	
	return 0;
}q
int* max(int* a, int *b){
	if(*b > *a){
		*a = *b;
	}
	return a;
}
