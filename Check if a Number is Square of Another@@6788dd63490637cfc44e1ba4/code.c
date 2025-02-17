#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // Check if b is equal to a * a
    if (a == b * b) 
    {
        printf("Yes");
    }
     else
    {
       printf("No");
    }
}
