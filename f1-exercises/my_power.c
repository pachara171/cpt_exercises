#include<stdio.h>
//my power
int main() {
	
	int base, power, value = 1, i;
	
	printf("base: ");
	scanf("%d", &base);
	printf("power: ");
	scanf("%d", &power);
	
	for(i = 0; i < power; i++){
		value *= base;
	}
	
	printf("=%d", value);
	
	return 0;
}
