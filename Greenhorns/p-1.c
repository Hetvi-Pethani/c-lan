#include<stdio.h>
main(){
	
	int salary,hra,da,ta,grows;
	printf("enter your salary:");
	scanf("%d",&salary);
	hra=(10*salary)/100;
    da=( 5*salary)/100;
    ta=( 8*salary)/100;
    grows=hra+da+ta+salary;
    printf("your gross salary is %d",grows);
}
