#include<stdio.h>
int factorial(int number);

int main(){
    int value, fact;
    printf("Enter the factorial number = ");
    scanf("%d",&value);
    fact=factorial(value);
    printf("The factorial of %d is = %d",value,fact);
}
int factorial(int value){
    int f;
    if(value==0 || value == 1){//factorial of o and 1 is 1 so we do not consider it.
        return 1;
    }
    else{
        f=value*factorial(value-1);
        return f;
    }
}/*1. Recursion is sometimes the most direct way to code an algorithm

2. The condition which doesn’t call the function any further in a recursive function is called the base condition.

3. Sometimes, due to a mistake made by the programmer, a recursive function can keep running without returning, resulting in a memory error*/