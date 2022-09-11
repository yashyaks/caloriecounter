// calorie burn prototype code

#include<stdio.h>
#include<conio.h>
int bmr(float h,float w,float a,char g)
{
    float bmr;
    if ((g=='F')||(g=='f'))
    {
          bmr=447.593+(9.247*w)+(3.098*h)-(4.33*a);             //bmr formula for females
    }
    else if ((g=='M')||(g=='m'))
    {
        bmr=88.362+(13.397*w)+(4.799*h)-(5.677*a);               //bmr formula for males
    }
    else
    {
        printf("Invalid Gender specified");
    }
    return(bmr);
}


int main()
{
    int number;
    float h,w,BMR,a,t,calburnt,n;
    char g,e;
    printf("Enter height in cm:");
    scanf("%f",&h);
    printf("Enter weight in kg:");
    scanf("%f",&w);
    printf("Enter age in yrs:");
    scanf("%f",&a);
    printf("Enter gender M/F:");
    _flushall();
    scanf("%c",&g);
    BMR=bmr(h,w,a,g);
    printf("BMR=%f",BMR);

for(n=1;n<=3;n++)
{
printf("Enter time duration ");
scanf("%f",t);
printf("1)Brisk Walking\n 2)Cycling\n3)Jogging\n4)Running\n5)None");
scanf("%d",&number);
if(number==5)
break;
else
{
switch(number)
{
case 1:
{

    calburnt=((BMR*3.3)/(24*t));
    printf("%f",calburnt);
    break;
}
case 2:
{

    calburnt=((BMR*5.5)/(24*t));
    printf("%f",calburnt);
    break;
}
case 3:
{

    calburnt=((BMR*7)/(24*t));
    printf("%f",calburnt);
    break;
}
case 4:
{

    calburnt=((BMR*8)/(24*t));
    printf("%f",calburnt);
    break;
}
case 5:
{
printf("Invalid");
break;
}
}
}
return(0);
}
}



