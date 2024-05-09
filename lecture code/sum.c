#include<stdio.h>
main(){
	
	int a;
	
	printf("enter of value:");
	scanf("%d",&a);
	
	int arr[a],i,sum=0;
	
	for(i=0;i<a;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++){
		printf("%d",arr[i]);
		sum=sum+arr[i];
	}
	printf("\n%d",sum);
	int avg=sum/a;

}
