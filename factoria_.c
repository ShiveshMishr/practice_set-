#include<stdio.h>
int main(){
    int factorail=1;
    int i =1 ;
    while(i<=8){
        
        factorail*=i;
        i++;
    }
    printf("The factorial of 8 is %d", factorail);
    return 0;
}