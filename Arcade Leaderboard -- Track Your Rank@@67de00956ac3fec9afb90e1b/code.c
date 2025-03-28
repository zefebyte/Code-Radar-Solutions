// Your code here...
// Online C compiler to run C program online
#include <stdio.h>
int trackPlayerRanks(ranked[],int n,player[],m,int result[]){
    int a=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(player[i]>ranked[j]){
                result[a]=j;
                a++;
                
            }
        }
    }return result;
}