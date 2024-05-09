#include <stdio.h>
main(){
        int num;
        printf("Enter your mark:");
        scanf("%d",&num);
         

        if(num >= 90)
		{
	        printf(" You got A grade"); 
	    }
	        else if ( num >=80)
			{ 
		        printf(" You got B grade");
		    }
	        else if ( num >=70)
	       {
		        printf(" You got C grade");
		    }
        	else if ( num >= 60)
			{
		        printf("you got D grade");
		    }
		    	else if ( num >= 40)
			{
		        printf("you got E grade");
		    }
		    	else if ( num < 40)
			{
		        printf(" You Failed in this exam");
		    }
}

