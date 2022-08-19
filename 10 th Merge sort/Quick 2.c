#include<stdio.h>


void quicksort(int number[25],int first,int last){
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
         i++;
         while(number[j]>number[pivot])
         j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;

      for(int k=0;k<10;k++)
        printf("%d ",number[k]);
      printf("\n");
      quicksort(number,first,j-1);

      quicksort(number,j+1,last);

   }

}
int main(){
   int i, count, number[25]={38,56,2,65,5,20,19,32,10,9};
  /*printf("How many elements are u going to enter?: ");
   scanf("%d",&count);
   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
  */

  // scanf("%d",&number[i]);
   quicksort(number,0,10-1);
   printf("Order of Sorted elements: ");
   for(i=0;i<10;i++)
   printf(" %d",number[i]);
   return 0;
}
