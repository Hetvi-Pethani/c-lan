#include<stdio.h>
main()
{
   int first, last, n, ans;
   printf("enter any  number:-");
   scanf("%d",&n);
   last = n % 10;
   do{
	first = n % 10;
	n = n / 10;
     }
     while (n>0);
       printf("first number:%d\n",first);
       printf("last number :%d\n",last);

     ans = first + last ;
     printf("addition of %d+%d is :-%d\n",first,last,ans);
   
}
