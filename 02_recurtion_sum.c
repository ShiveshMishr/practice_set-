#include<stdio.h>
float averagenumber(int a , int b , int c);

int main(){
    float a,b,c, total;
    printf("Enter the number = ");
    scanf("%f %f %f",&a,&b,&c);

    total = averagenumber(a,b,c);
    printf("The average of three numbers %f %f %f = %f", a, b , c,total);
    return 0;
}
float averagenumber(int a , int b ,int c){
    double average ;
    average= (a+b+c)/3;
    return average;
}