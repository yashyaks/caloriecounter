#include<stdio.h>
struct excercise
{
	int m;
	char exercise[20];
}e[100];

struct userinformation
{
    char name[10];
    float times;
    float answer;
}s[100];
float bmr(float h,float w,float a,char g,float bm)
{
    if ((g=='F')||(g=='f'))
    {
        bm=447.593+(9.247*w)+(3.098*h)-(4.33*a);             //bmr formula for females
    }
    else if ((g=='M')||(g=='m'))
    {
        bm=88.362+(13.397*w)+(4.799*h)-(5.677*a);               //bmr formula for males
    }
    else
    {
        printf("Invalid Gender specified");
    }
    return(bm);
}


int main()
{
    int i=0,n,m,j,k;
    struct userinformation s[100];
    int number;
    float h,w,BMR,a,t,calburnt,sum=0,bm;
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
    BMR=bmr(h,w,a,g,bm);
    printf("Your Basal Metabolic Rate(BMR) is %f",BMR);

     for(i=0;i<10;i++)
    {

         if(i==0)
         {
            e[i].m=0;
            e[i].exercise=="Swimming";
            printf("%d%s",e[i].m,e[i].exercise);
         }

         else if(i==1)
         {
            e[i].m=1;
            e[i].exercise=="Cycling";
            printf("%d%s",e[i].m,e[i].exercise);
         }
         else if(i==2)
         {
            e[i].m=2;
            e[i].exercise=="Walking";
            printf("%d%s",e[i].m,e[i].exercise);
         }
         else if(i==3)
         {
            e[i].m=3;
            e[i].exercise=="Weight Training";
            printf("%d%s",e[i].m,e[i].exercise);
         }
          else if(i==4)
         {
            e[i].m=4;
            e[i].exercise=="Running";
            printf("%d%s",e[i].m,e[i].exercise);
         }
          else if(i==5)
         {
            e[i].m=5;
            e[i].exercise=="Jogging";
            printf("%d%s",e[i].m,e[i].exercise);
         }
          else if(i==6)
         {
            e[i].m=6;
            e[i].exercise=="Aerobics";
            printf("%d%s",e[i].m,e[i].exercise);
         }



    }
    printf("How many of the following activities did you perform today?");
    scanf("%d",&n);
    printf("Exercise name\tDuration\tCalories burnt\n");
    printf("--------------------------------------\n");
    printf("-------------------------------------------\n");

    for(j=0;j<=n-1;j++)
    {
        printf("Enter exercise name & duration for which it is performed");
        scanf("%f%s",s[j].name,s[j].times);

     for(j=k)
        {
            if(s[j].name=e[0].exercise)
            {
                printf("%s\t\t%f\t\t%f\n",s[j].name,s[j].times,((BMR*7)/(24*s[j].times)));
                s[j].answer=((BMR*7)/(24*s[j].times));
            }

            else if(s[j].name=e[1].exercise)
            {
                printf("%s\t\t%f\t\t%f\n",s[i].name,s[j].times,((BMR*5.5)/(24*s[j].times)));
                s[j].answer=((BMR*5.5)/(24*s[j].times));
            }

            else if(s[j].name=e[2].exercise)
            {
                printf("%s\t\t%f\t\t%f\n",s[j].name,s[j].times,(((BMR*3.3)/(24*s[j].times))));
                s[j].answer=((BMR*3.3)/(24*s[j].times));
            }

            else if(s[j].name=e[3].exercise)
            {
                printf("%s\t\t%f\t\t%f\n",s[j].name,s[j].times,((BMR*8.0)/(24*s[j].times)));
                s[j].answer=((BMR*8.0)/(24*s[j].times));
            }

            else if(s[j].name=e[4].exercise)
            {
                printf("%s\t\t%f\t\t%f\n",s[j].name,s[j].times,((BMR*3.0)/(24*s[j].times)));
                s[j].answer=((BMR*3.0)/(24*s[j].times));
            }

            else if(s[j].name=e[5].exercise)
            {
                printf("%s\t\t%f\t\t%f\n",s[j].name,s[j].times,((BMR*7)/(24*s[j].times)));
                s[j].answer=((BMR*7)/(24*s[j].times));
            }

            else if(s[j].name=e[6].exercise)
            {
                printf("%s\t\t%f\t\t%f\n",s[j].name,s[j].times,((BMR*3.3)/(24*s[j].times)));
                s[j].answer=((BMR*3.3)/(24*s[j].times));
            }


            sum=sum+s[j].answer;


        }
    }    

    printf("You have burnt %f calories",sum);
 return(0);

}
