#include<stdio.h>
int main(){
    
    int num [] = {1,2,3,5,6};
    int sum =0;
    for (int c=0 ;c<=4;c++)
    {
     sum = sum + num [c]; 
      
    }
    printf("sum=%d",sum); 
    return 0;
    
} 