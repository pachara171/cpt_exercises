#include<stdio.h>
//number_is_fun

int main() {
	int i, ans, guess, count = 0;
	printf("Ans: ");
	scanf("%d", &ans);
	
	for(i = 0; i < 1000; i++){
		if(i < 20){
			printf("\n");
		}
		else{
			printf("T%02d: ", i - 19);
			scanf("%d", &guess);
			count++;
			if(count >= 10){
				printf("=Game over\n");
				break;
			}
			else if((guess - ans <= 3 && guess - ans > 0) || (ans - guess <= 3 && ans - guess > 0)){
				printf("Very close\n");
			}
			else if(guess > ans){
				printf("=Too large\n");
			}
			else if(guess < ans){
				printf("=Too small\n");
			}
			else if(guess == ans){
				printf("=victory\n");
				break;
			}
		}
	}
	return 0;
}
