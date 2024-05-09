#include<stdio.h>
void main(){

       int a;
	   int *ptr;
	   ptr = &a;
	   
	   printf("enter the any number:");
	   scanf("%d",&a);
	   
	   printf("A\t:%d\n",a);
	   printf("PTR\t:%d\n",*ptr);
	   
       printf("Address of A\t:%u\n",&a);
	   printf("PTR\t:%u\n",ptr);
	   	   	
}


