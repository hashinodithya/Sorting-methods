#include<stdio.h>
#define n 7


void mergeSort(int arr1[],int arr2[],int array[]){
    int i,j,small,temp,l;

    for(int i=0;i<7;i++){
        if(i<4){
            array[i]=arr1[i];
           // printf("%d\n")
        }
        else{
            array[i]=arr2[i-4];
        }
    }
    for(int j=0;j<n;j++){
        printf("%d, ",array[j]);
        //small=arr2[]
    }

    for(int k=4;k<n;k++){
        small=array[k];

        for( l=k-1;l>=0 && small<array[l];l--)
            array[l+1]=array[l];

        array[l+1]=small;


        printf("\nAfter iteration %d: ",i);
        for(int x=0;x<n;x++){
            printf("%d, ",array[x]);
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
    int arr1[]={3,5,7,9};
    int arr2[]={2,6,12};

    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int array[n];

    printf("%d\n",n1);
    mergeSort(arr1,arr2,array);

    sortedarray(array);
    return 0;
}
