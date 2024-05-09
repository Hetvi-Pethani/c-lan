#include<stdio.h>
void main(){

       int a,b;
	   int *ptr;
	   ptr = &a;
	   ptr = &b;
	   
	   printf("enter the any number X:");
	   scanf("%d",&a);
	   printf("enter the any number Y:");
	   scanf("%d",&b);
	   
	   printf("Before swapping:\n");
	   printf("A\t:%d\n",a);
	   printf("B\t:%d\n",*ptr);
	   
	   printf("After swapping:\n");
	   printf("A\t:%d\n",b);
	   printf("B\t:%d\n",a);
	   
       
	   	   	
}


