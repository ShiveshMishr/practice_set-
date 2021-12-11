#include<stdio.h>
void sumAverage(int a, int b, int *sum, float *average);

int main(){
    int sum ,i, j;
    float average;
    sumAverage(i, j,&sum,&average);
    printf("the value of sum is %d \n",sum);
    printf("the value of avg is %f \n",average);
    return 0;
}
void sumAverage(int a , int b, int *sum , float *average){
    a=10, b=10;
     *sum = a+ b;
     *average = *sum/2;
}