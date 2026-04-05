#include <stdio.h>

int main() {
    // Write C code here
    int i=10,sum=0,x,y;
    while (i<100) {
        
        if(i%2!=0) {
            x=(i/10);
            y=(i%10);
             if(x+y==7) {
              printf("%d\n",i);
            }
        }
        i++;
    }
    
    

    return 0;
}
