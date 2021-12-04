//wap that reads size of an array from the user . Now read array 
//elements from the user and print the highest value
#include<stdio.h>
int main(){
    int n , count ;
    float biggest ;
    printf("Enter the size of the array ");
    scanf("%f",&n);
    int value[n]
    for(count = 0;count<n; ++count )
        printf("value[%f]=",count);
        scanf("%f",&value[count]);
    }
    biggest = value[0];
    for(count=1;count<n;++count){
        if(value[count]>biggest){
            biggest=value[count];
        }
    }
    printf("Biggest value=%.2f",biggest);


}