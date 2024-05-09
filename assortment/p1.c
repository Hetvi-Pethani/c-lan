#include<stdio.h>
main()
{
	 int i,n;
	printf("enter size of array:-");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter a[%d]:-",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<0){
		printf(" nagative elements:-%d\n",a[i]);	
	    }
	}
}

