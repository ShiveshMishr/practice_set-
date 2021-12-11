#include<stdio.h>
void swap(int *a, int *b);


int main(){
    int a, b ;
    printf(" Enter the number to be swaped");
    scanf("%d %d",&a , &b);
    printf("number before swaped %d %d\n", a,b);
    swap(&a ,&b);
    printf("After swaping  %d %d \n", a, b );
    return 0;
}
void swap(int *a , int *b){
    int temp ;
    temp= *a;
    *a= *b;
    *b= temp;

}