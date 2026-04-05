#include <stdio.h>

int main()
{
	int n=0,x=0,y=0;
	for(int i=10; i<=100; i++) {
		if(i%2==0) {
			x=(i/10);
			y=(i%10);
			if(x+y==6) {
				n=n+i;
				printf("%d \n",i);
			}

		}


	}

	return 0;
}