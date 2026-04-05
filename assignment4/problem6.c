#include <stdio.h>

int main()
{
   int x=0,y=0;
  
  loop: if(x<20) {\
       if(x>10 && x%2!=0){
       printf("%d\n",x);
       }
       
       x++;

       
       
       
       goto loop;
   }
   
   
    return 0;
}
