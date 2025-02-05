#include <stdio.h>
#include<math.h>



int main() {


int n;
scanf("%d",&n);
int ans = 0;
int i = 1;

while(n!=0){
    int bit = n&1;
    ans = (bit*i)+ans;
    i*-10;
    n=n>>1;
    
}
printf("%d",ans);

    return 0;
}
