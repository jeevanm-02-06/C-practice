#include <stdio.h>
int main() {
	int n=0;
	int multi[100];
	int count=0,sum=0;
	do {
		printf("Enter a no:");
		scanf("%d",&n);
		multi[count]=n;

		sum=sum+multi[count];
		count++;
	} while(n>0);


	printf("%d",sum);






	return 0;
}