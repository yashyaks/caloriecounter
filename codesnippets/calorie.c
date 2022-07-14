#include<stdio.h>
struct userinformation
{
    char name[10];
    float times;
    float answer;
};
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
    int i=0,n;
    struct userinformation s[100];
    int number;
    float h,w,BMR,a,t,calburnt,sum=0;
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
    printf("Your Basal Metabolic Rate(BMR) is %f",BMR);
    printf("How many of the following activities did you perform today?1)Swimming\n2)Cycling\n3)Jogging\n4)Aeorbics\n5)Calesthenics\n6)Walking\n7)Weight Training");
    scanf("%d",&n);

    for(i=0;i<=n-1;i++)
    {
        printf("Enter exercise name & duration for which it is performed");
        scanf("%s%f",s[i].name,&s[i].times);

    }
    printf("Exercise name\tDuration\tCalories burnt\n");
    printf("---------------------------------------------------------------------\n");

    for(i=0;i<=n-1;i++)
    {
        if(s[i].name=="Swimming")
        {
            printf("%s\t\t%f\t\t%f\n",s[i].name,s[i].times,((BMR*7)/(24*s[i].times)));
            s[i].answer=((BMR*7)/(24*s[i].times));
        }

        else if(s[i].name=="Cycling")
        {
            printf("%s\t\t%f\t\t%f\n",s[i].name,s[i].times,((BMR*5.5)/(24*s[i].times)));
            s[i].answer=((BMR*5.5)/(24*s[i].times));
        }

        else if(s[i].name=="Walking")
        {
             printf("%s\t\t%f\t\t%f\n",s[i].name,s[i].times,(((BMR*3.3)/(24*s[i].times))));
            s[i].answer=((BMR*3.3)/(24*s[i].times));
        }

        else if(s[i].name=="Calesthenics")
        {
            printf("%s\t\t%f\t\t%f\n",s[i].name,s[i].times,((BMR*8.0)/(24*s[i].times)));
            s[i].answer=((BMR*8.0)/(24*s[i].times));
        }

        else if(s[i].name=="Yoga")
        {
            printf("%s\t\t%f\t\t%f\n",s[i].name,s[i].times,((BMR*3.0)/(24*s[i].times)));
            s[i].answer=((BMR*3.0)/(24*s[i].times));
        }

        else if(s[i].name=="Jogging")
        {
            printf("%s\t\t%f\t\t%f\n",s[i].name,s[i].times,((BMR*7)/(24*s[i].times)));
            s[i].answer=((BMR*7)/(24*s[i].times));
        }

        else if(s[i].name=="Aerobics")
        {
            printf("%s\t\t%f\t\t%f\n",s[i].name,s[i].times,((BMR*3.3)/(24*s[i].times)));
            s[i].answer=((BMR*3.3)/(24*s[i].times));
        }

        else if(s[i].name=="Weight training")
        {
            printf("%s\t\t%f\t\t%f\n",s[i].name,s[i].times,((BMR*3.3)/(24*s[i].times)));
            s[i].answer=((BMR*3.3)/(24*s[i].times));
        }

        else if(s[i].name=="Running")
        {
            printf("%s\t\t%f\t\t%f\n",s[i].name,s[i].times,((BMR*8)/(24*s[i].times)));
            s[i].answer=((BMR*8)/(24*s[i].times));
        }

        else
        {
            printf("%s\t\t%f\t\t%f\n",s[i].name,s[i].times,((BMR*3.3)/(24*s[i].times)));
            s[i].answer=((BMR*3.3)/(24*s[i].times));
        }
        sum=sum+s[i].answer;


    }

    printf("You have burnt %f calories",sum);
 return(0);

}
