#include <stdio.h>

int main()
{
    int n;
    printf("Enter a no   ");
    scanf("%d",&n);
    
    int t=n;
    int di=1;
    int d=0;
    
    
    
    goto loop;
      loop:
        if(t/10 > 0) {
            di=di*10;
            d++;
            t=t/10;
            goto loop;
            
        }d++;
        
        int fd=t;
        int res=n;
        
        if(fd%2 != 0) {
            res=res-(1*di);
            printf("%d",res);
        }
        
        else {
            printf("%d",res);
        }

    return 0;
}
