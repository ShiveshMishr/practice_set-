#include<stdio.h>
int main()
{
    int arr [] ={1,5,6,9,78};
    int biggest=arr[0];
    for(int i=0 ; i<=4; i++){
        if(arr [i]> biggest){
            biggest = arr [i];

        }
    }
    printf("biggest = %d",biggest);
    return 0;
}