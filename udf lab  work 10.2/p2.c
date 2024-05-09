#include<stdio.h>
int mystrlen(char str[10]);


int main()
{
 char str[10];
 int i, len;

 printf("Enter any string:");
 gets(str);

 len = mystrlen(str); 
 printf("Length of given string is: %d", len);

 return 0;
}

int mystrlen(char str[10])
{
 int i, len;

 for(i=0; i<str[i];i++)
 {
  len++;
 }

 return(len);
}
