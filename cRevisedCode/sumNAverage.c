#include<stdio.h>
int main(){
    float arr[10] , sum =0 ;
    for(int count = 0 ; count <10 ; count++){
        printf("Enter the Number");
        scanf("%f",&arr[count]);
        sum= sum+ arr[count];
    }
    printf("sum=%.02f \n Average = %.02f", sum , sum/10);
}