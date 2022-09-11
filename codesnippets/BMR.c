//prototype code for BMR calculation
//using function used to customize calorie burn
//based on users physical metrics

#include <stdio.h>
int main()
{
    float h,w,BMR;    //height=h weight=w age=a gender=g
    int a;
    char g;
    int bmr(float,float,int,char);
    printf("Enter height in meter:");
    scanf("%f",&h);
    printf("Enter weight in lbs:");
    scanf("%f",&w);
    printf("Enter age in yrs:");
    scanf("%f",&a);
    printf("Enter gender M/F:");
     _flushall();
    scanf("%c",&g);
    BMR=bmr(h,w,a,g);
    printf("BMR=%f",BMR);
    return 0;
}
int bmr(float h,float w,int a,char g)
{
    float bmr;
    if ((g=='F')||(g=='f'))
    {
          bmr=655+(4.35*w)+(4.7*h)-(4.7*a);   //bmr formula for females
    }
    else if ((g=='M')||(g=='m'))
    {
        bmr=66+(6.23*w)+(12.7*h)-(6.8*a);   //bmr formula for males
    }
    else
    {
        printf("Try again");
    }
    return bmr;
}
