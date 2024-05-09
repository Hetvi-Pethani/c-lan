// Write a program that takes a number as input and checks if it's positive, negative, or zero. Print the result accordingly.//
#include<stdio.h>
main(){
     int n;
     
     printf("enter the number:");
     scanf("%d",&n);

    if(n==0){
    	printf("enter the zero");
	}
    else if(n>0){
    	printf("Number is positive");
	}
    else{
       printf("Number is negative");
    }
}
