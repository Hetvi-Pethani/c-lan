#include<stdio.h>
main(){
	
	int row,col,i,j;
	printf("enter the value of row:");
	scanf("%d",&row);
	printf("enter the value of col:");
	scanf("%d",&col);
	
	int arr[row][col];
	
	for(i=0; i<row;i++){
		for(j=0;j<col;j++){
			printf("arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0; i<row;i++){
		for(j=0;j<col;j++){
			printf("%d",arr[j][i]);
		}
		printf("\n");
	}
}
