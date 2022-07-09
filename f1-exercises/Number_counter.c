#include<stdio.h>
//number counter
int main() {
	
	int num = 0, positive = 0, negative = 0;
	int round = 1;
	
	do{
		if(num > 0){
			positive++;
		}
		else if(num < 0){
			negative++;
		}
		printf("N%02d: ", round);
		scanf("%d", &num);
	
		round++;
	}while(num != 0);
	
	printf("Positive=%d\n", positive);
	printf("Negative=%d\n", negative);
	
	return 0;
}
