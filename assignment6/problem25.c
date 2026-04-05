#include <stdio.h>

int main() {
    // Write C code here
    int temp=0,sum=0,c=0,dig=1,last_dig=0,x;

    scanf("%d",&x);
    temp=x;
   
    
    
    while(temp%10>0) {
        
        
        last_dig=(temp%10);
        temp=temp/10;
        dig=1;
        c=0;
        
       while (dig<=last_dig) {
           
           if(last_dig%dig==0) {
               c=c+1;
              
               
           }
            dig++;
            
            
        }if(c==2) {
            sum=sum+1;
            }
         
       
        
    }
    printf("%d",sum);
    
    return 0;
}
