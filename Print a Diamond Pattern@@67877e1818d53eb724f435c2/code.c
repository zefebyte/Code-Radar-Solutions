// Your code here...
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    int m=n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }printf("\n");

    }
    for(int a=1;a<=n-1;a++){
        for(int b=1;b<=a;b++){
            printf(" ");
        }
        for(int c=1;c<=2*(n-a)-1;c++){
            printf("*");
            
        }printf("\n");
    }


    return 0;
}