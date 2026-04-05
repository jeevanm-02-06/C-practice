#include <stdio.h>

int main()
{
   printf("Enter a no:");
   int n=0,temp=0,di=0,c=0,place=1,sum=0;
   scanf("%d",&n);
   
   di=3;
   
   if(di==3){
       n=n/10;
       di--;
   }
   
   for(temp=n;di>0;di--) {
       sum=((temp%10)*place)+sum;
       temp=temp/10;
       place=place*10;
       
       
   }
   
   for(int i=1;i<=sum;i++) {
	    if(sum%i==0) {
	        c=c+1;
	    }
	    
	}
	printf("%d\n",sum);
	
	
	if (c==2) {
	    printf("Prime");
	    
	}
	else  {
	    printf("Not Prime");
	}



    return 0;
}