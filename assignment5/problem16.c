#include <stdio.h>


int main()

{
    int n,di=1,c=0,y=0,t=0;
	printf("enter a no: ");
	
	scanf("%d",&n);
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
	    
	    
	



	
	return 0;


}