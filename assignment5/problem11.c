#include <stdio.h>

int main()
{
    printf("enter a no: ");
    int n=0,di=0;
    scanf("%d",&n);
    for(int t=n;t/10>0;t=t/10 ) {
        di=di+1;
    }
    di=di+1;
    
    printf("%d",di);

    return 0;
}