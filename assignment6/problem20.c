#include <stdio.h>

int main()
{
    printf("Enter the range\n");
    int n=0,p=0,c=0;
    
    for (int i=2;i<=10;i++) {
        c=0;
        for(int j=1;j<=10;j++) {
            if(i%j==0) {
                c=c+1;
                
            }
            
        }
        if (c==2) {
            p=p+1;
        }
    }
    printf("%d",p);

    return 0;
}