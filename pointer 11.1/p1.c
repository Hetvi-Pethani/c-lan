#include<stdio.h>
void main(){
	
	int n;
	
	printf("enter the any number:");
	scanf("%d",&n);
	
	int a[n];
	int *ptr[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		ptr[i]=&a[i];
	}
	
	for(i=0;i<n;i++)
	{
		int multiple=(*ptr[i]) * (*ptr[i]);
		printf("%d\n",multiple);
	}
	
}
