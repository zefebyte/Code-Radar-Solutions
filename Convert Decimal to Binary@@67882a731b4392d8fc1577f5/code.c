#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number

    int ans = 0;  // To store the binary representation
    int i = 1;    // Place value (1, 10, 100, etc.)

    while (n != 0) {
        int bit = n & 1;   // Extract the least significant bit (rightmost)
        ans = ans + (bit * i); // Add it to the answer with the appropriate place value
        i *= 10;  // Move to the next place value (1 -> 10 -> 100 -> 1000, etc.)
        n = n >> 1;  // Right shift n to process the next bit
    }

    printf("%d", ans);  // Print the binary representation
    return 0;
}
