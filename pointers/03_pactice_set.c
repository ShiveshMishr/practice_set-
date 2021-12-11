//write a program to change the value of a variabel to ten time of its current value . write a function and pass the value by reference.
#include<stdio.h>
int valueByReference(int *a);

int main(){
    int a =3;
    printf("Current value = %d \n", a);
    valueByReference(&a);
    return 0;
}
int valueByReference(int *a){
    int *value;
    value = (*a * 10);
    printf("Ten time of current value =%d",*(&value));
    return value; 
}