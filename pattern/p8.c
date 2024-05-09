#include<stdio.h>
main(){
	int i,j,h=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",h);
			h++;
		}
		printf("\n");
	}
}
