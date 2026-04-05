#include <stdio.h>

int main()
{
   
   int x=6,y;
  loop: if(x>0) {
       printf("%d\n",x);
       y=y+x;
       x--;
       
       
       
       goto loop;
   }
   
   printf("%d",y);
    return 0;
}