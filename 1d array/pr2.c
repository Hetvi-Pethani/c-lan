#include<stdio.h>
main(){
	
	int a,b,i;
	
	printf("enter string year:");
	scanf("%d",&a);
	printf("enter ending year:");
	scanf("%d",&b);
	
	int year=b-a;
	int arr[year];
	
	for(i=0;i<year;i++){
		arr[i]=a+i;
		if(arr[i] %4==0){
			printf("%d ",arr[i]);
		}
	}
	
}
