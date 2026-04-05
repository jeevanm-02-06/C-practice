#include <stdio.h>

int main()
{
    printf("Enter the no:\n");
    int n=0,p=0,c=0,m=0;
    scanf("%d",&n);
    
    for (int i=n;i>0;i=i/10) {
        p=i%10;
        if(p%2!=0) {
        c=c+1;
        }
        
    }
    
    
    printf("%d",c);

    return 0;
}