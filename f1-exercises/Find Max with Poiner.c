#include<stdio.h>
#define LEN 5
//find Max with Poiner

int* find_max(int *p, int len);

int main(){
	int d[LEN], i;
	int *max_ptr;
	for(i = 0; i < LEN; i++){
		printf("N%02d: ", i + 1);
		scanf("%d", &d[i]);
	}
	max_ptr = find_max(d, LEN); 
	
	//use find max appropriately
	printf("=%d\n", *max_ptr);
	return 0;
}

//define find max here!
int* find_max(int *p, int len){
	//p = d;
	int i, *max;
	max = p;
	
	for(i = 0; i < len; i++){
		if(*p > *max){
			*max = *p;
		}
		p++;
	}
	return max;
}


