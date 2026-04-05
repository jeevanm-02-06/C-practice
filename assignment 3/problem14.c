#include <stdio.h>

int main()
{
   int x,y;
   printf("Enter a no:");
   scanf("%d",&x);
   
   if((x/100)==(x%100)){
       printf("Success");
       
   }
   else{
       printf("Failiure");
   }
   

    return 0;
}
