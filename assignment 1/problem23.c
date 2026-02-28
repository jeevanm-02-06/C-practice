#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter you no:");
    scanf("%d",&x);
    y=x-5*(((x/10)+(x%10))%2);
    printf("Result: %d",y);

    return 0;
}