#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>

struct excercise
{
	int n;
	char excercise[20];
	float MET;
};
struct userinputforexcercise
{
    char excercise[20];
    float duration;
    float calburnt;
};

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds=1000*number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock()<start_time+milli_seconds);
}

float bmr(float h,float w,float a,char g)
{
    float bmr;
    if ((g=='F')||(g=='f'))
    {
        bmr=447.593+(9.247*w)+(3.098*h)-(4.33*a);             //bmr formula for females
    }
    else if ((g=='M')||(g=='m'))
    {
        bmr=88.362+(13.397*w)+(4.799*h)-(5.677*a);           //bmr formula for males
    }
    else
    {
        bmr=0;
        printf("Invalid information\n");
    }
    return(bmr);
}

void main()
{
    int i,duration,input,MET,j=0,temp,k;
    float h,w,BMR,a,t,calburnt=0;
    char g;
    struct excercise e[]={{1,"Swimming",7},{2,"Cycling",5.5},{3,"Walking",3.3},{4,"calesthenics",8.0},{5,"Yoga",3.0},{6,"Jogging",7},{7,"Aerobics",3.3},{8,"Weight training",3.3},{9,"Running",8},{10,"done",0}} ;
    struct userinputforexcercise ui[1000];
    ui[j].calburnt=0;

    do
    {
        printf("Enter height in cm:");
        scanf("%f",&h);
        printf("Enter weight in kg:");
        scanf("%f",&w);
        printf("Enter age in yrs:");
        scanf("%f",&a);
        printf("Enter gender M/F:");
        _flushall();
        scanf("%c",&g);
        if((g!='F')&&(g!='f')&&(g!='M')&&(g!='m'))
        {
            printf("try again\n");

        }
    } while((g!='F')&&(g!='f')&&(g!='M')&&(g!='m'));
    printf("Calculating");
    for (i=0;i<3;i++)
    {
        delay(1);
        printf(".");
    }
    system("cls");

    BMR=bmr(h,w,a,g);
    printf("Your Basal Metabolic Rate(BMR) is %f\n",BMR);

    printf("\nExcercises\n\nSr.No.\tExcercise\tMET\n");
    printf("---------------------------------------------------------------------\n");

    for(i=0;i<10;++i)
    {
        printf("%d]\t%s\t%f\n",e[i].n,e[i].excercise,e[i].MET);
    }

    do
    {
        printf("What serial number of excercise performed? ");
        scanf("%d",&input);
        i=0;
        if(input!=10)
        {
            MET=input-1;
            printf("How many hours did you perform it for? ");
            scanf("%f",&ui[j].duration);
            ui[j].calburnt=(e[MET].MET)*(BMR/24)*ui[j].duration;
            calburnt=calburnt+ui[j].calburnt;
            strcpy(ui[j].excercise,e[j].excercise);

        }
        //printf("%f\n",ui[j].duration);
        //printf("%f\n",ui[j].calburnt);
        //printf("J = %d\n", j);
        temp=j;
        j++;
    }while (input<10);

    system("cls");
    printf("Generating calorie burn report");
    for (i=0;i<3;i++)
    {
        delay(1);
        printf(".");
    }
    system("cls");

    printf("Calorie Burn Report\n");
    printf("Exercise name\tDuration\tCalories burnt\n");
    printf("---------------------------------------------------------------------\n");
    for(i=0;i<temp;i++)
    {
        printf("%s\t\t%f\t%f\n",ui[i].excercise,ui[i].duration,ui[i].calburnt);
    }
    //printf("%d\n",temp);
    printf("You have burnt %f calories\n",calburnt);
}




