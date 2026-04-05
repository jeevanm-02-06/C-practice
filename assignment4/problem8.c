#include <stdio.h>

int main()
{
   int x=0,y=0;
   
  loop: if(x<100) {
        y=(x/10+x%10);
       if( x>10 && y==6 && x%2==0){
       printf("%d\n",x);
       }
       
       x++;

       
       
       
       goto loop;
   }
   
   
    return 0;
}