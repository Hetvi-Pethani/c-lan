#include<stdio.h>

main(){
	int a,b,c;
	
	printf("enter the a number :");
	scanf("%d",&a);
	printf("enter the b number :");
	scanf("%d",&b);
	printf("enter the c number :");
	scanf("%d",&c);
	
	
	(a<b)
		?((a<c)?printf(" a is min")
		       :printf(" e is min"))
	:((b<c)?(printf("bis min"))
	       :(printf("cis min")));
	       
}

