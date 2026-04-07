#include <stdio.h>

int main() {
    int n = 0;
    int multi[100];
    int count = 0;

    do {
        printf("Enter a no: ");
        scanf("%d", &n);
        if (n > 0) {        
            multi[count] = n;
            count++;
        }
    } while (n > 0);

    if (count < 2) {
        printf("Need at least 2 numbers to compare.\n");
    } else if (multi[0] == multi[count - 1]) {  
        printf("SUCCESS\n");
    } else {
        printf("FAILURE\n");
    }

    return 0;
}