#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter you no:");
    scanf("%d",&x);
    y=((x/100)+((x%100)/10)+((x%100)%10));
    printf("Result: %d",y);

    return 0;
}
