#include <stdio.h>

int main() {
    // Write C code here
    int i=10,sum=0,x,y;
    while (i<100) {
        
        if(i>0) {
            x=(i/10);
            y=(i%10);
             if(y==5) {
              sum=sum+i;
            }
        }
        i++;
    }
    printf("%d",sum);
    
    

    return 0;
}
