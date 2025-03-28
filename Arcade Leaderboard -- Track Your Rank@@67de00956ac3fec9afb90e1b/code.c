// Your code here...
// Online C compiler to run C program online
#include <stdio.h>
void trackPlayerRanks(ranked,n,player,m,result){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(player[i]>ranked[j]){
                for(int k=0;k<m;k++){
                    result[k]=j;
                }
            }
        }
    }
}