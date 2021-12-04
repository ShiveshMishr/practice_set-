//wap that reads the temperature of a city for
// the last 10 days into an array 

#include<stdio.h>
int main(){
    int arr[5];
    for(int i = 0 ;i<5;++i){
        printf("enter the temperature of the day %d ",i+1);
        scanf(" %d ", &arr[i]);
        
    }
    for(int i=0 ; i<5;++i){
        printf("termperature of the day %d = %d \n",i+1 , arr[i]);
    }

}