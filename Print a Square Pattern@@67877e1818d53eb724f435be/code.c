// Your code here...
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n*2;j++){
            if(j%2==0){
                printf(" ");
            }
            else{
                printf("*")
            }
        }printf("\n");
    }

    return 0;
}