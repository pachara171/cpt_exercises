#include<stdio.h>
//Reset Zero with Pointer
#define LEN 10
int* find_neg(int *p, int *q);

int main() {
	int d[LEN], i;
	
	for(i = 0; i < LEN; i++){
		printf("N%02d: ", i + 1);
		scanf("%d", &d[i]);
	}
	
	//use fine neg appropriately
	for(i = 0; i < LEN; i++){
		int *neg;
		neg = find_neg(&d[i], &d[LEN]);
		if(neg == &d[i]){
			d[i] = 0;
		}
		
	}
	printf("= ");
	for(i = 0; i < LEN; i++){
		printf("%d ", d[i]);
	}
	printf("\n");
	
	return 0;
}

int* find_neg(int *p, int *q){
	if(p >= q){
		return NULL;
	}
	else if(*p < 0){
		return p;
	}
	
	

	
}
