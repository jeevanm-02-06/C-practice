#include <stdio.h>

int main()
{
    int n;
    int array[5];
    int sum=0;
    
    for(int i=0;i<5;i++) {
        printf("Enter the %d no:",i+1);
        scanf("%d",&n);
        array[i]=n;
        
        
       sum+=array[i];
    }
    
    printf("%d",sum);
  
    

    return 0;
}