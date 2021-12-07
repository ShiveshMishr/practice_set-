//sum is a function which takes a and b as input and returns an integer as a output

#include<stdio.h>
int sum(int a , int b);
int main(){
    int c ;

    c = sum(5,10);
printf("sum= %d",c);
return c;
}
int sum(int a , int b){
    int result;
    result= a+b;
    return result;
}