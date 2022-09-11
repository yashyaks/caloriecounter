//prototype code for BMI calculation
//using function and analysis of result of users BMI

#include <stdio.h>
int main()
{
    float BMI,h,w;
    float bmi(float,float);
    printf("Enter your weight in kgs");
    scanf("%f",&w);
    printf("Enter your height in metres");
    scanf("%f",&h);
    BMI=bmi(h,w);
    if(BMI<=18.4)
    printf("Your BMI is %f and you are underweight",BMI);
    else if(BMI>=18.5 && BMI<=24.9)
    printf("Your BMI is %f and you are normal",BMI);
    else if(BMI>=25.0 && BMI<=39.9)
    printf("Your BMI is %f and you are overweight",BMI);
    else if(BMI>=40.0)
    printf("Your BMI is %f and you are obese",BMI);
    return 0;
}
float bmi(float x,float y)
{
    float ans;
    ans=y/(x*x);
    return ans;
}
