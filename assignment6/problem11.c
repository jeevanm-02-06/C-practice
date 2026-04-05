#include <stdio.h>

int main() {
    // Write C code here
    int temp=0,sum=0,x,dig=0,p=0;

    scanf("%d",&x);
    temp=x;
   
    
    
    while(temp%10>0) {
        
        dig=dig+1;
        sum=sum+(temp%10);
        temp=temp/10;
       
        
    }
    
    printf("%d",sum);
    
    
    
    
    
    
    

    return 0;
}