#include <stdio.h>

int main()
{
    float n=0;
    int count=0; 
    float small_num=0;
    float five[5];
    int sum=0;
    
    for(int i=0;i<5;i++) {
        printf("Enter the %d no:",i+1);
        scanf("%f",&n);
        five[i]=n;
        
        
      
    }
    
    for(int j=0;j<=4;j++) {
        count=0;
        for(int y=0;y<5;y++) {
            if(five[j]>five[y]) {
                count=count+1;
                
            }
        }
       if(count==4)  {
           small_num=five[j];
           
       }
       
        
        
    }
    
    printf("%.2f",small_num);

  
    

    return 0;
}