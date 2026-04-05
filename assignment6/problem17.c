#include <stdio.h>


int main()

{
    int n,di=1,c=0,y=0,t=0;
	printf("enter a no: ");
	
	scanf("%d",&n);
	
	y=(n/10);
	t=(n%10);
	
	if (y+t==14) {
	for(int i=1;i<=n;i++) {
	    if(n%i==0) {
	        c=c+1;
	    }
	    
	}
	
	
	if (c==2) {
	    printf("Prime");
	    
	}
	else  {
	    printf("Not Prime");
	}
	}  
	    
	



	
	return 0;


}