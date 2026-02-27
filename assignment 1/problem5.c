#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter you no:");
    scanf("%d",&x);
    y=x%8;
    printf("Result: %d",y);

    return 0;
}