#include <stdio.h>

int main()
{
   int x,y;
   printf("Enter a no:");
   scanf("%d",&x);
   y=(x%100);
   if((y/10)==(y%10)){
       printf("Success");
       
   }
   else{
       printf("Failiure");
   }
   

    return 0;
}