#include<stdio.h>
//high low
int main() {
	
	int num[10], min, max, i;
	
	for(i = 0; i< 10; i++){
		printf("N%02d: ", i+1);
		scanf("%d", &num[i]);
	}
	
	min = num[0];
	max = num[0];
	
	// loop calculate
	for(i = 0; i < 10; i++){
		//min value
		if(num[i] < min){
			min = num[i];
		}
		//max value
		if(num[i] > max){
			max = num[i];
		}
	}
	
	printf("Max=%d\n", max);
	printf("Min=%d\n", min);
	
	return 0;
}
