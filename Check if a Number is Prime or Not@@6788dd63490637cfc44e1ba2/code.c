// Your code here...
// Online C compiler to run C program online
#include <stdio.h>

int main() {
  
int n;
scanf("%d",&n);
int flag  = 1;
for(int i=2;i*i<=n;i++){
    if(n%i==0){
       flag =0;
       break;
}}
if(flag){
    printf("Prime");
}
else{
    printf("Not Prime");
}}
