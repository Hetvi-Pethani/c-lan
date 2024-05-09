#include<stdio.h>
main(){
	
	int i, length, upr=0, lwr=0, num=0, spe=0;
	char id[10], pswd[10];
	
	printf("enter your id :");
	gets(id);
	printf("enter your password :");
	gets(pswd);
	
	length = strlen(id);
	printf("%d" , length);
	
	length = strlen(pswd);
	printf("%d" , length);
	
	
	for(i=0; i<length; i++){
		if(pswd[i]<=65 && pswd[i]>=90)upr++;
		if(pswd[i]<=97 && pswd[i]>=122)lwr++;
		if(pswd[i]<=48 && pswd[i]>=57)num++;
		if(pswd[i]=='@' || pswd[i]=='#')spe++;
	}
	
	if(upr<=0 && lwr<=0 && num<=0 && spe<=0)
	{
		printf("login succesfully");	
	}
	else
	{
		printf("enter your valid id password");	
	}
}
