#include<stdio.h>
main(){
	
	int a, b ,choice;
	printf("enter the number of a: ");
	scanf("%d",&a);
	printf("enter the number of b: ");
	scanf("%d",&b);
	printf("press 1 for Addition\n");
	printf("press 2 for Substraction\n");
	printf("press 3 for Multiplication\n");
    printf("press  for Devision\n");
	printf("enter the number of choice: ");
	scanf("%d",&choice);
		
	
	
	switch(choice)
	{
		case 1:
			printf("%d + %d = %d" ,a,b,a+b);
			break;
			
		case 2:
			printf("%d - %d = %d" ,a,b,a-b);
			break;
			
		case 3:
			printf("%d * %d = %d" ,a,b,a*b);
			break;
			
		case 4:
			printf("%d / %d = %d" ,a,b,a/b);
			break;
			
		default:
			printf("enter your valid choice");
			
			
		
			
	}
	
	
}
