#include <stdio.h>

int main()
{
	int n=0,count=0,temp=0,sum=0,p;
	printf("Enter the no:");
	scanf("%d",&n);
	int i=1;
	temp=n;
	int x,y;

	while (i<=temp) {

		if(temp%i==0) {

			count=count+1;
		}
		
		;
	i++;



	}

	


x=(temp/10);
y=(temp%10);
if(x+y==14) {
	sum=sum+1;
}

if(count==2 && sum==1)
{
	printf("PRIME and sum is 14");


}
else if(count>2 && sum==1) {
	printf("NOT PRIME but sum is 14");
}

else if(count==2 && sum==0)
{
	printf(" PRIME but sum is not 14");
}
else if(count>2 && sum==0) {
	printf("NOT PRIME but sum is not  14");
}




return 0;
}