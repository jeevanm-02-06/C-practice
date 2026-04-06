 #include <stdio.h>

int disp_2digit_odd_sum7() {
    

   int n=0,x=0,y=0;
	for(int i=10; i<=100; i++) {
		 x=(i/10);
		 y=(i%10);
		 if(x+y==7){
			if(i%2!=0) {
				n=n+i;
				printf("%d \n",i);
			}

		}
		
	
}

	return 0;
}


    

int main()
{
    int n;
    disp_2digit_odd_sum7();
    return 0;
}