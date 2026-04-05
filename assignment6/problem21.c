#include <stdio.h>

int main() {
    // Write C code here
    int temp=0,sum=0,c=0,dig=0,last_dig=0,x;

    scanf("%d",&x);
    temp=x;
   
    
    
    while(temp%10>0) {
        
        dig=dig+1;
        last_dig=(temp%10);
        temp=temp/10;
        if(last_dig%2!=0) {
            c=c+1;
            
        }
        
       
        
    }
    printf("%d",c);
    
    return 0;
}