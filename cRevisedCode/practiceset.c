#include<stdio.h>
int main()
{
    float marks , s1 , s2,s3, sum , per;
  int count = 1;
  while(count<4){
         printf("Enter the marks of %d subject = \n ",count);
count++;
    }
   
    scanf("%f %f %f ", &s1 ,&s2 , &s3);

    if(s1 < 33 && s1< 100)
    {
        printf("fail in s1 \n");
    }
    if(s2< 33 && s2< 100)
    {
        printf("fail in s2 \n");
    }
    if(s3<33 && s3< 100){
        printf("fail in s3 \n");
    }

    sum = s1+s2+s3;
    per= sum/300*100;
    if(per<40){
        printf("over all Fail");
    }else
    {
    printf("over all pass");
    }
    

}