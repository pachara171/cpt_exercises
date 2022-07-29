#include<stdio.h>
//Sum with Pointer
void psum(int* m, int* data);

int main(){
	int data, m = 0;
	do{
	printf("N:");
	scanf("%d", &data);
	psum(&m, &data);
		
	}while(data != 0);
	
	printf("= %d", m);
	return 0;
}

void psum(int* m, int* data){
	//m = &m;
	//data = &data;
	*m += *data; 
}

