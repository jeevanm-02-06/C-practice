 #include <stdio.h>

int disp_2digit_odd_below_20() {
    

    
 int n=0;
	for(int i=10; i<=20; i++) {
		 
			if(i%2!=0) {
				n=n+i;
				printf("%d \n",i);
			}

		}

    
}




int main()
{
    int n;
    disp_2digit_odd_below_20();
    return 0;
}