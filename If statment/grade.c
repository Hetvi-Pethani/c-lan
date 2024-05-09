//Grade Calculator//
#include<stdio.h>
main(){
	
	int a;
	printf("enter tha grade:");
	scanf("%d",&a);
	if(a <=50){
		printf("your grade is fail");
	}
	else if(a<=80){
		printf("your grade is B+");
	}
	else{
		printf("your grader is A+");
	}
	
}
