#include<stdio.h>
#define n 10


void bubbleSort(int arr[]){
    int i,j,temp;
    int flag;
    for(i=0;i<n-1;i++){
        flag=1;
        for(j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                flag=0;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
        if (flag!=0){
            break;
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
    bubbleSort(arr);
    return 0;
}
