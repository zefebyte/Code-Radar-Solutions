#include <stdio.h>



int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int res1 = a>>b+1;
    int res2 = res1<<b+1;
    printf("%d",res2);
  
    return 0;
}