#include <stdio.h>

int main()
{
   int n=0,count=0,temp=0;
   printf("Enter the no:");
   scanf("%d",&n);
   int i=1;
   temp=n;
   
   while (i<=temp) {
       if(temp%i==0) {
           count=count+1;
           
       }
       i++;
   }
   
   if(count==2)
   {
       printf("PRIME");
       
       
   }
   else if(count>2) {
       printf("NOT PRIME");
   }
   
    return 0;
}   
	    
	



	
