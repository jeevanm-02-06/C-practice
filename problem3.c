#include <stdio.h>

int main()
{
   
   int x=0;
  loop: if(x<6) {
       printf("%d\n",x);
       y=y+x;
       x++;
       
       
       
       goto loop;
   }
   
   printf("%d",y);
    return 0;
}