#include <stdio.h>

int p=0;


int isPrime(int p) {
	int c=1;

	for(int m=2; m<=p; m++) {
		if(p%m==0) {
			c=c+1;
		}

	}
    if (c==2) {
        return 1;

	}

	else {
		return 0;
	}
}


int main()
{
	float n=0;
	int count=0;
	float small_num=0;
	int five[5];
	int sum=0;
	int new[5];

	for(int i=0; i<5; i++) {
		printf("Enter the %d no:",i+1);
		scanf("%f",&n);
		five[i]=n;



	}
	count=0;

	for(int j=0; j<=4; j++) {

		if (isPrime(five[j])==1) {
			new[count]=five[j];


			printf("%d\n",new[count]);
			count++;
		}

	}
	return 0;
}
