#include <stdio.h>


int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float avg = (a+b+c)/3;
    printf("Average: %.2f",avg);

    return 0;
}