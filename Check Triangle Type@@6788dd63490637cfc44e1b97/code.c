// Your code here...
#include <stdio.h>
int main(){
    int a,b,c;
    if(a==b==c){
        printf("Equilateral");
    }
    else if( a==b ||a==c||b==c){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
}