#include<stdio.h>
void main()
{
	int i,j;
	int r,c;
	
	printf("enter the size row:-");
	scanf("%d",&r);
	printf("enter the size cols:-");
	scanf("%d",&c);
	
	int a[3][3];
	int b[3][3];
    int h[3][3];
    printf("elements of a\n");
    //input of A.
    
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf(" enter a[%d][%d]:-",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("elements of b\n");
	//input of B.
		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
	    {
	    	printf("enter b[%d][%d]:-",i,j);
	    	scanf("%d",&b[i][j]);
		}
    }
    
    

    //addition loop.
    for(i=0;i<=2;i++)
    {
    	for(j=0;j<=2;j++)
    	{
    	  	h[i][j]=a[i][j]+b[i][j];
    		printf("%d ",h[i][j]);
		}
		printf("\n");
	}
}

