
        
#include <stdio.h>

void printHollowSquare(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print stars for the borders of the square
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                // Print space for the hollow inside
                printf(" ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }
}

int main() {
    int n;

    // Input the size of the square
    
    scanf("%d", &n);

    // Print the hollow square pattern
    printHollowSquare(n);

    return 0;
}
