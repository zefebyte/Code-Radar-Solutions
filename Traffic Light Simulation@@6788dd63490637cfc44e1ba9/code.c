// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    a=toupper(a);
        if(a=='R'){
            printf("Stop");
        }
        else if(a=='G'){
            printf("Go");
        }
        else if(a=='Y'){
            printf("Slow Down");
        }
        else{
            printf("Invalid");
        }
        return 0;
    }
    

   
