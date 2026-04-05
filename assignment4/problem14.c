#include <stdio.h>

int main()
{
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    int t=n;
    int d=1;
    int di=0;
    
    goto loop;
    loop:
       if((t/10)>0) {
           d=d*10;
           di=di+1;
           t=t/10;
           goto loop;
       }
       di=di+1;
       
       
       int fd=t;
       int ld=n%10;
       
       
       int r=n;
       r=r-(fd*d);
       r=r+(ld*d);
       r=r-ld;
       r=r+fd;
       printf("%d",r);
       
       
    
    

    return 0;
}