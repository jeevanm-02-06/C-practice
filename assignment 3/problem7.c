#include <stdio.h>

int main()
{
    int x,y,z;
    printf("Enter you no:");
    scanf("%d",&x);
    y=(x/10);
    x=(x%10);
    if (x==y) printf("Succes");
    else printf("Faliure");

    return 0;
}