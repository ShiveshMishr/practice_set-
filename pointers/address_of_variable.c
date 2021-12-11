#include<stdio.h>
int main(){
    int a = 3;
    

    printf("THE ADDRESS OF A VARIABLE a=%u is %u\n",a, &a);
    printf("printing the value of a =  %d", *(&a));
    return 0;

}