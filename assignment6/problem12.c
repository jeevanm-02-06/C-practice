
#include <stdio.h>

int main() {
    // Write C code here
    int temp=0,sum=0,x,dig=0,last_dig=0;

    scanf("%d",&x);
    temp=x;
   
    
    
    while(temp%10>0) {
        
        dig=dig+1;
        last_dig=(temp%10);
        temp=temp/10;
        printf("%d",last_dig);
       
        
    }
    
    return 0;
}