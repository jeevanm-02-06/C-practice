#include <stdio.h>

int main()
{
	int x=0,y=0,z=0;
	printf("Enter a no:");
	scanf("%d",&x);
	y=x;
	
	if(y<=0) {
	   printf("INVALID");
	}
	
	else {
	   loop: 
	         y=y/10;
	         z++;
	         
	         if(y>0) {
	             goto loop;
	         }
	       printf("The no of digits are %d",z);
	       
	    
	    
	}
	

return 0;


}