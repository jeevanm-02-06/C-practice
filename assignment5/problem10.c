#include <stdio.h>

int main()
{
	int n=0,x=0,y=0;
	for(int i=10; i<=100; i++) {
		
			x=(i/10);
			y=(i%10);
			if(i%2!=0) {
				if(x==7) {

					n=n+i;

					
				}

			}


		}
		printf("%d \n",n);

		return 0;
	}