//Create a program that prompts the user to enter their age and determines if they are eligible to vote (age 18 or older) or not.//
#include<stdio.h>
main(){
	
	int a;
	printf("enter tha age:");
	scanf("%d",&a);
	if(a <=0){
		printf("enter the value:");
	}
	else if(a>=18){
		printf("you can vote");
	}
	else{
		printf("you can not vote");
	}
	
}
