#include<stdio.h>
int printaddress(int *k);

int main(){
    int i=7;
    printf("printing the address of i %u \n", &i);
    printaddress(i);
    printf("the address of variable is %u \n", &i);
    
}
int printaddress(int *k){
    printf("the address of variable of k is %u\n",&k);
}