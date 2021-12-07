#include<stdio.h>
int area(int a);

int main(){
    int totalarea;
    int value;
    printf("Enter the Side of the squre = ");
    scanf("%d",&value);
    totalarea = area(value);
    printf("The area of the square is = %d ",totalarea);
    return 0;
}
int area(int a){
    int areaOFsqure;
    areaOFsqure = a *a;
    return areaOFsqure;
}