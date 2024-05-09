#include<stdio.h>
main(){
	int i=15,j;
	printf("enter the valu:");
	scanf("%d",&j);
	do{
		if(i%2==1){
			printf("%d",i);
			printf("\n");
		}
		i--;
	}
	while(i>=1);
}
