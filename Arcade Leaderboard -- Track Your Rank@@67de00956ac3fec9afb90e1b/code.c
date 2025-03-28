// Your code here...
// Online C compiler to run C program online
#include <stdio.h>
void trackPlayerRanks(int ranked[],int n,int player[],int m,int result[]){
    int a=0;
    for(int i=0;i<m;i++){
        int rankfound =0;
        for(int j=0;j<n;j++){
            if(player[i]>=ranked[j]){
                result[a]=j+1;
                a++;
                rankfound =1;
                break;
                
            }
        }
        if(!rankfound){
            result[a] =n+1;
            a++;
        }
    }
}