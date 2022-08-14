#include<stdio.h>
#define n 10

void selectionSort(int arr[]){
    int i,j,small,temp;

    for(i=0;i<n-1;i++){
        small=i;
        for(j=i+1;j<n;j++){
            if(arr[small]>arr[j]){
                small=j;
            }
        }
        if(small!=i){
            temp=arr[i];
            arr[i]=arr[small];
            arr[small]=temp;
        }
        printf("\n%d th iteration :",i+1);
        for(int k=0;k<n;k++){
            printf("%d",arr[k]);
            if(k!=n-1)
                printf(", ");
            }
    }
}


int main(){
    int arr[]={3,12,6,7,4,2,9,10,1,5};
    selectionSort(arr);
    return 0;
}
