#include <stdio.h>

int main()
{
	printf("Hello World\n");

	int n=10,j=1,i=1,num=0,count=0;

	while (i<=10) {
		
		j=1;
		count=0;
		while(j<=i) {
		    
		    if(i%j==0) {
		        count=count+1;
		    }
		    j++;
		    
		    
		}
		i++;
		if(count==2) {
		    num=num+1;

		}
		
		    
		    
		}
		printf("%d",num);
		
	return 0;
}
