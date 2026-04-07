#include <stdio.h>
#include <math.h>

int main()
{
    float n=0;
    int count=0; 
    float small_num=0;
    float five[5];
    int sum=0;
    int new[5];
    
    for(int i=0;i<5;i++) {
        printf("Enter the %d no:",i+1);
        scanf("%f",&n);
        five[i]=n;
        
        
      
    }
    count=0;
    
    for(int j=0;j<=4;j++) {
        
        if ((int)five[j] % 2 != 0) {
                new[count]=five[j];
               
                
                printf("%d\n",new[count]);
                count++;
            }
            
        }
       
       
       
        
        

    return 0;
}