#include<stdio.h>

void main()
{
    int a[3][3],b;
    int i,j;
	int sum=0;
	printf("Enter The Row & Column:");
	scanf("%d",&b);
     
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        	printf("enter a[%d][%d]:-",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
        {
           printf("%d",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }

    printf("The sum of diagonal elements of an Array: = %d",sum);
}
