#include<stdio.h>
//prime number
int main() {
	int x, i, j, primre_num = 0, check = 0;
	
	printf("X:");
	scanf("%d", &x);
	
	for(i = 1; i <=x; i++){
		for(j = 1; j <= i; j++){
			
			if(i % j == 0){
				check++;
			}
		}
		if(check == 2){
			primre_num++;
			check = 0;
		}
		else{
			check = 0;
		}
		
		
	}
	printf("=%d", primre_num);
	
	return 0;
}
