// Online C compiler to run C program online
// Your code here...// Online C compiler to run C program online
#include <stdio.h>
void mostplayed(int arr[], int size){
    int maxel;
    int maxcount = 0;
    for(int i=0;i<size;i++){
    int count =0;
    for(int j=0;j<size;j++){
        if(arr[i]==arr[j]){
            count++;
        }
        
    }if(count>maxcount){
            maxcount = count;
            maxel = arr[i];
        }

    }printf("%d",maxel);

}

int main() {
    int n;
    scanf("%d",&n);
    int arr[1000];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mostplayed(arr,n);

    return 0;
}