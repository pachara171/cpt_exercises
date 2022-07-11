#include<stdio.h>
//matrix_determinant

int detA(int a[3][3]);

int main() {
	
	int matrix[3][3], i, j;
	int row, column, data;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			matrix[i][j] = 0;
		}
	}
	
	while(row != -1){
		printf("Enter: ");
		scanf("%d %d %d", &row, &column, &data);
		if(row == -1){
			break;
		}
		matrix[row][column] = data;
	}
	
	printf("=%d", detA(matrix));
	
	return 0;
}

int detA(int a[3][3]){
	
	int aei, bfg, cdh, afh, bdi, ceg;
	aei = a[0][0] * a[1][1] * a[2][2];
	bfg = a[0][1] * a[1][2] * a[2][0];
	cdh = a[0][2] * a[1][0] * a[2][1];
	afh = a[0][0] * a[1][2] * a[2][1];
	bdi = a[0][1] * a[1][0] * a[2][2];
	ceg = a[0][2] * a[1][1] * a[2][0];
	
	return (aei + bfg + cdh) - (afh + bdi + ceg);
}


