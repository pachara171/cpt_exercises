#include<stdio.h>
//Scoped Find Max
#define LEN 10
int* find_max(int *p, int *q);

int main() {
	int d[LEN], i, m, n;
	int *max_ptr;
	
	for(i = 0; i < LEN; i++){
		printf("N%02d: ", i + 1);
		scanf("%d", &d[i]);
	}
	printf("Scope: ");
	scanf("%d %d", &m, &n);
	
	//use find max appropriately
	max_ptr = find_max(d + m, d + n);
	
	printf("=%d\n", *max_ptr);
	return 0;
}
//define find max here!
int* find_max(int *p, int *q){
	
	int *i, *max;
	
	max = p;
	
	for(i = p; i <= q; i++){
		if(*i > *max){
			*max = *i;
		}
	}
	return max;
	
}

