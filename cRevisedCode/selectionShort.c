#include<stdio.h>
void selectionShort(int arr[] , int n);
 void printArray(int arr[], int size);
int main(){
    int arr[]={5,2,1,3,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    selectionShort(arr,n);
    printf("shorted arry ");
    printArray(arr,n);
    return 0;
}
void swap(int *x , int *y){
        int temp= *x;
        *x=*y;
        *y=temp;

    }
void selectionShort(int arr[] , int n){
    int i, j, min_idx;
    for(i=0;i < n-1;i++){
        min_idx=i;
        for(j=i+1;j<n;j++)
        if(arr[j]<arr[min_idx]){
            min_idx= j;

            swap(&arr[min_idx],&arr[i]);
        }
    }
}

    void printArray(int arr[], int size)
    {
        int i;
        for (i=0;i<size;i++)
        printf("%d", arr[i]);
        
    }