#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
    if(n%4==0){
        printf("Leap Year");
    }
    else if(n%400==0 && n%100!=0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}