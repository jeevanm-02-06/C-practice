#include <stdio.h>

int main()
{
	int n=0,count=0,temp=0,no=0,p=0,dig=1;
	printf("Enter the no:");
	scanf("%d",&n);
	int di=2;

	temp=n;
	int i=1;

	while(di>0) {

		p=temp%10;
		no=(p*dig)+no;
		temp=temp/10;
		dig=dig*10;
		di--;

	}
	printf("%d\n",no);
	
	while(i<=no) {
		if(no%i==0) {
			count=count+1;
		}
		i++;

	}

	if(count==2) {
		printf("PRIME");


	}
	else if (count>2) {
		printf("NOT PRIME");
	}








	return 0;
}
