#include <stdio.h>


int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int res = a>>b;
    int reso = res&1;
    printf("%d",reso);

    return 0;
}