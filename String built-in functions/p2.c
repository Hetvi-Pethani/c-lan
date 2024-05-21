#include<stdio.h>
main(){
	
	int i, envalid = 0, passwordvalid = 0;
	char id[10], pswd[10];
	char email[20] = "admin@gmail.com", password[20] = "123456";
	
	printf("enter your id :");
	gets(id);
	printf("enter your password :");
	gets(pswd);
	
	
	for(i=0; id[i]!='\0'; i++)
	{
		if(id[i]==email[i])
		{
			envalid++;
		}
		else 
		{
			break;
		}
	}
	
	for(i=0; pswd[i]!='\0'; i++)
	{
		if(pswd[i]==password[i])
		{
			passwordvalid++;
		}
		else 
		{
			break;
		}
	}
	
	if(envalid == strlen(id) && passwordvalid == strlen(pswd))
	{
		printf("login succesfully");	
	}
	else
	{
		printf("Login Failed. Invalid Credentials.");	
	}
}
