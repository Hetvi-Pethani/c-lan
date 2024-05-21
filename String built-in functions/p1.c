#include<stdio.h>
main(){
	
	int i,length,upr=0,lwr=0,num=0,spe=0;
	char pwd[10];
	
	printf("Enter The Password:");
	gets(pwd);
	
	length=strlen(pwd);
	printf("%d",length);
	
	for(i=0;i<length;i++){
		
		if(pwd[i]>=65 && pwd[i]<=90)upr++;
        else if(pwd[i]>=97 && pwd[i]<=122)lwr++;
		else if(pwd[i]>=48 && pwd[i]<=57)num++;		
		else spe++;
	}
		if(upr>0 && lwr>0 && num>0 && spe>0)
		{
			printf("your password in Strong");
		}
		else{
			printf("your password in Week");
		}
}
