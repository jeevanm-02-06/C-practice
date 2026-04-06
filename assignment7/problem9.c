 #include <stdio.h>

int disp_2digit_ones5() {
    

 {	int n=0,x=0,y=0;
	for(int i=10; i<=100; i++) {
		
			x=(i/10);
			y=(i%10);
			 
				if(y==5) {

					n=n+i;

					
				}

			}


		
		printf("%d \n",n);

	
}
}


    

int main()
{
    int n;
    disp_2digit_ones5();
    return 0;
}