#include<stdio.h>
//number_components

void display_components(int n);

int main() {
	
	int num;
	
	printf("Enter:");
	scanf("%d", &num);
	display_components(num);

	return 0;
}

void display_components(int n){
	int spread_n[5], i, j, divisor = 10000;
	
	for(i = 0; i < 5; i++){
		
		spread_n[i] = (n / divisor) * divisor;
		n -= spread_n[i];
		divisor /= 10;
	}
	
	printf("=");
	
	for(i = 0; i < 5; i++){
		if(spread_n[i] != 0){
			printf("%d", spread_n[i]);
			
			for(j = i+1; j < 5; j++){
				if(spread_n[j] != 0){
					printf("+%d", spread_n[j]);
				}
				i = j;
			}
		}
	}
}
