#include <stdio.h>
int main()
{
    int h,w,a,bmr;    //height=h weight=w age=a gender=g
    char g;
    printf("Enter height in inches:");
    scanf("%d",&h);
    printf("Enter weight in lbs:");
    scanf("%d",&w);
    printf("Enter age in yrs:");
    scanf("%d",&a);
    printf("Enter gender M/F:");
    scanf("%c %c",&g,&g);
    if ((g=='F')||(g=='f'))
    {
          bmr=655+(4.35*w)+(4.7*h)-(4.7*a);   //bmr formula for females
    }
    else if ((g=='M')||(g=='m'))
    {
        bmr=66+(6.23*w)+(12.7*h)-(6.8*a);   //bmr formula for males
    }
    else if ((g!='M')&&(g!='m')&&(g!='F')&&(g!='f'))
    {
        printf("Invalid Gender specified");
    }
    return 0;

}