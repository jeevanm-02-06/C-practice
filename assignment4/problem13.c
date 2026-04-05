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
	   
	       z=(y%10);
	       y=y/10;
	       printf( "%d",z);
	         
	         
	         
	         if(y>0) {
	             goto loop;
	         }
	      
	       
	    
	    
	}
	

return 0;

}