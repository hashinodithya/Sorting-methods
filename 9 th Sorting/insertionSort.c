#include<stdio.h>
#define n 10

void selectionSort(int arr[]){
    int i,j,small,temp;

    for(i=1;i<n;i++){
        small=arr[i];
        for(j=i-1;j>=0 && small<arr[j];j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=small;

        printf("\nAfter iteration %d: ",i);
        for(int l=0;l<n;l++){
            printf("%d, ",arr[l]);
        }
        }
    }

void sortedarray(int arr[]){
    printf("\n\nThe sorted array is :");
    for(int i=0;i<n;i++){
        printf("%d, ",arr[i]);
    }
}

int main(){
    int ar[]={3,12,6,7,4,2,9,10,1,5};
    selectionSort(ar);

    sortedarray(ar);
    return 0;
}
