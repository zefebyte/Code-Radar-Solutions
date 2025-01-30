#include <stdio.h>


int main() {
    char str[];
    scanf("%[^\n]%*c",str);
    printf("you entered %s", str);
    return 0;
}