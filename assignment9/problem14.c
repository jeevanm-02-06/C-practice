#include <stdio.h>

int main() {
    int n = 0;
    int multi[100];
    int count = 0;

    do {
        printf("%d    ", count);
        printf("Enter a no: ");
        scanf("%d", &n);
        if (n > 0) {
            multi[count] = n;
            count++;
        }
    } while (n > 0);

    if (count == 0) {
        printf("No numbers entered.\n");
        return 0;
    }

    if (count % 2 != 0) {
        
        printf("Middle number: %d\n", multi[count / 2]);
    } else {
        
        int firstcen  = multi[(count / 2) - 1];
        int secondcen = multi[count / 2];
        float z = (firstcen + secondcen) / 2.0;
        printf("Average of middle two: %.2f\n", z);
    }

   