#include <stdio.h>

int main()
{
	int n,t=0,sum=0,count=0;

	for(int i=10; i<100000; i++) {
		sum=0;
		for(int j=i; j>0; j=j/10) {


			sum=sum+(j%10);




		}
		if(sum==14) {
			count=count+1;



		}


	}
	printf("%d",count);




	return 0;
}
