#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number

    int ans = 0;  // To store the binary representation
    int i = 0;    // Exponent for pow(10, i)

    while (n != 0) {
        int bit = n & 1;           // Extract the least significant bit
        ans = ans + (bit * int pow(10, i));  // Use pow(10, i) to calculate place value
        n = n >> 1;  // Right shift n to process the next bit
        i++;  // Increment i to move to the next place value (1, 10, 100, etc.)
    }

    printf("%d", ans);  // Print the binary representation

    return 0;
}

