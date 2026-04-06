 #include <stdio.h>

int disp_odd() {
    

    
 int n=0;
	for(int i=1; i<=9; i++) {
		 
			if(i%2!=0) {
				n=n+i;
				printf("%d \n",i);
			}

		}

    
}




int main()
{
    int n;
    disp_odd();
    return 0;
}