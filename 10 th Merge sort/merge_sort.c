#include<stdio.h>
#define n 10
int a[]={34,5,1,5,4,6,5,9,4,1};


void MERGE(int beg,int mid,int end){
    int n1,n2;
    n1=mid-beg+1;
    n2=end-mid;

    int left[n1],right[n2];
    int i,j,k;

    for(i=0;i<n1;i++){
        left[i]=a[beg+i];
        //k++;
    }
    for(j=0;j<n2;j++){
        right[j]=a[mid+1+j];
        //k++;
    }
    i=0;j=0,k=0;

    while(i<n1 && j<n2){
        if(left[i]<right[j]){
            ar[k]=left[i++];
        }
        else{
            ar[k]=right[j++];
        }
        k++;
    }
    if(i<n1){
        while(i<n1){
            ar[k++]=left[i++];
        }
    }
    if(j<n2){
        while(j<n2){
            ar[k++]=right[j++];
        }
    }




}


void MERGE_SORT(int beg,int end){
    int mid;
    if (beg < end){
         mid = (beg + end)/2 ;
        //printf("%d firsr\n",mid);
        MERGE_SORT( beg, mid);
        //printf("%d-%d\n",mid,end);
        MERGE_SORT( mid+ 1, end);
        printf("%d and %d last  :%d\n",beg,mid,end);
        MERGE ( beg, mid, end);
    }
}

int main(){
    int b[n];
    MERGE_SORT(0,9);

    for(int i=0;i<n;i++){
        printf("%d, ",ar[i]);
    }
}
