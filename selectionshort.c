#include<stdio.h>

void swap(int *xp,int*yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void selectionsort(int arr[],int n){
    int i,j,min_index;
     
     for(i=0;i<n-1;i++){
     min_index=i;

     for(j=i+1;j<n;j++)

     if (arr[j]<arr[min_index])
     min_index=j;

     if(min_index !=i)
    swap(&arr[min_index],&arr[i]);
 }
}

void print(int arr[],int n){
    for (int i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");

}

int main(){
    int arr[]={64,25,12,22,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    print(arr,n);
    return 0;
}