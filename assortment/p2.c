#include<stdio.h>
main()
{
	int r,c;
	int largest=0;
	int a[3][3];
    int i,j;
	 
	printf("enter the array row:-",a[r]);
	scanf("%d",&r);
	printf("enter the array columns:-",a[c]);
	scanf("%d",&c);
	printf("\n");
	printf("enter array elements:-\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("enter [%d][%d]:-",i,j);
		scanf("%d",&a[i][j]);
     	}
   }
   printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[0][0]<a[i][j]){
				a[0][0]=a[i][j];	
			}
       }
    }
     	printf("the larg/est elements :-");
     	printf("%d",a[0][0]);
}

