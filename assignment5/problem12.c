#include <stdio.h>

int main()
{
    printf("enter a no: ");
    int n=0,di=0,s=0,y=0;
    scanf("%d",&n);
    for(int t=n;t/10>0;t=t/10 ) {
        di=di+1;
        
        s=s+(t%10);
        y=t;
    }
    s=s+(y/10);
    di=di+1;
    printf("%d",s);
    
    
    

    return 0;
}
