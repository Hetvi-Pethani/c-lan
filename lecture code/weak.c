#include<stdio.h>
main(){
	
	int week;
	printf("enter your week :");
	scanf("%d",&week);

	switch(week)
	{
		case 1:
			printf("week1");
			
			break;
		case 2:
			printf("week2");
			
			break;
		case 3:
			printf("week3");
			
			break;
		case 4:
			printf("week4");
			
			break;
		case 5:
			printf("week5");
			
			break;
			
		default:
			printf("enter your valid week");
			
	}
}
