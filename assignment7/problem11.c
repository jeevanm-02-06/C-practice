#include <stdio.h>

int disp_count_all_digits(int n) {
     int di=0,s=0,y=0;
     for(int t=n;t>0;t=t/10 ) {
        di=di+1;
        
        
        y=t;
    }
    

    printf("%d",di);
    }

int main()
{
    printf("enter a no: ");
    int n=0,di=0,s=0,y=0;
    scanf("%d",&n);
    disp_count_all_digits(n);
    return 0;
}


