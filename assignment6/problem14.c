#include <stdio.h>


int main()
{
	printf("enter a no: ");
	int n=0,di=1,s=0,y=0,t=0;
	scanf("%d",&n);
	for(int t=n; t/10>0; t=t/10 ) {
		di=di*10;

		y=t;
	}
	int h=y/10;


	s=(n%10);
	int r=n;
	r=r-(h*di);
	r=r+(s*di);
	r=r-(s);
	r=r+(h);



	printf("%d\n",r);

	return 0;


}