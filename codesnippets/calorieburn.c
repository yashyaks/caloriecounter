#include<stdio.h>
void main()
{
    float h,w,BMR,a;
    char g,e;
    char excercises[][100] = {"walking","yoga", "jogging"};
    float bmr(float,float,float,char);
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
    printf("what did you do for excercise today");
    scanf("%s",&e);
    for(int i=0;i<3;++i)
    {  
    cmp = strcmp(excercises[i],e);
    if(cmp==0)
    {
        y = i + 1;
    }
    }





float bmr(float h,float w,float a,char g)
{
    float bmr;
    if ((g=='F')||(g=='f'))
    {
          bmr=655+(4.35*w)+(4.7*h)-(4.7*a);             //bmr formula for females  
    }
    else if ((g=='M')||(g=='m'))
    {
        bmr=66+(6.23*w)+(12.7*h)-(6.8*a);               //bmr formula for males
    }
    else 
    {
        printf("Invalid Gender specified");
    }
    return bmr;
}

float met(float)


}