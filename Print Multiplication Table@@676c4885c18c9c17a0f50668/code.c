// Your code here...
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d",n,i,n*i);
        printf("/n");
    }
  

    return 0;
}