#include<stdio.h>
#define n 25

void quickSort(int number[25],int first,int last){

    int i,j,pivot,temp;
    if(first<last){
        pivot = first;
        i=first;
        j=last;

        while(i<j){
            while(number[i]<=number[pivot]&&i<last)
                i++;
            while(number[j]>number[pivot])
                j--;
            if(i<j){
                temp= number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }

        temp =number[pivot];
        number[pivot]=number[j];
        number[j]=temp;


      for(int k=0;k<10;k++)
        printf("%d ",number[k]);
      printf("\n");
        quickSort(number,first,j-1);
        quickSort(number,j+1,last);
    }


}


int main(){
    int number[25]={384,56,2,65,3,20,19,32,10,9};
    quickSort(number,0,10-1);

    for(int i;i<10;i++){
        printf("%d ",number[i]);
    }
}
