#include<stdio.h>
//upper_values

int main() {
	
	int num[10], i;
	float sum = 0, avg;
	
	for(i = 0; i < 10; i++){
		printf("N%02d:", i+1);
		scanf("%d", &num[i]);
		sum += num[i];
	}
	
	avg = sum / 10;
	printf("=");
	
	for(i = 0; i < 10; i++){
		
		if(num[i] > avg){
			printf("%d  ", num[i]);
		}
	}
	
	return 0;
}

