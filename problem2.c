#include <stdio.h>

int main()
{
  int x=5;
   
  loop: if(x>0 && x<6) {
       printf("%d\n",x);
       x--;
       goto loop;
   }

    return 0;
}