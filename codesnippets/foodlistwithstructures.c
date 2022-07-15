//solution using structure
#include<stdio.h>
#include<string.h>

struct excercise 
{
	int n;
    char excercise[20];
	int MET;
}e[10];


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


void main()
{
    int i,duration,input,MET,total=0;
    float h,w,BMR,a,t,calburnt,sum=0;
    char g;
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
    printf("Your Basal Metabolic Rate(BMR) is %f\n",BMR);
    

    struct excercise e[10]; 

    struct excercise e0 = {10,"done",0};

    struct excercise e1 = {1,"Swimming",7};                  
    struct excercise e2 = {2,"Cycling",5.5};
    struct excercise e3 = {3,"Walking",3.3};
    struct excercise e4 = {4,"calesthenics",8.0};
    struct excercise e5 = {5,"Yoga",3.0};
    struct excercise e6 = {6,"Jogging",7};
    struct excercise e7 = {7,"Aerobics",3.3};
    struct excercise e8 = {8,"Weight training",3.3};
    struct excercise e9 = {9,"Running",8};
    



    printf("%d]%s\t%d\n",e1.n,e1.excercise,e1.MET);      //1--->figure out a way to do this way more elegantly(this one works but dont wanna type this a thousand times
    printf("%d]%s\t%d\n",e2.n,e2.excercise,e2.MET);
    printf("%d]%s\t%d\n",e3.n,e3.excercise,e3.MET);
    printf("%d]%s\t%d\n",e4.n,e4.excercise,e4.MET);
    printf("%d]%s\t%d\n",e5.n,e5.excercise,e5.MET);
    printf("%d]%s\t%d\n",e6.n,e6.excercise,e6.MET);
    printf("%d]%s\t%d\n",e7.n,e7.excercise,e7.MET);
    printf("%d]%s\t%d\n",e8.n,e8.excercise,e8.MET);
    printf("%d]%s\t%d\n",e9.n,e9.excercise,e9.MET);
    printf("%d]%s\t\n",e0.n,e0.excercise);  
    
    

   /* for(i=0;i<3;i++)
    {
         printf("%d]%s %d\n",e[i].n,e[i].excercise,e[i].MET);
         //printf("%s",e[i].excercise);                              //1--->this for loop is supposed to work perfectly but doesnt, see file delthisb4commit.c it works there
         //printf("%d\n",e[i].MET);
    }
   // printf("%d]%s %d", e[0].n, e[0].excercise, e[0].MET);*/

    do
    {
        printf("What Excercise did you perform?");
        scanf("%d",&input);
        
        //figure out a way to extract the value stored in ecah structure and use it so as to avoid switch case
        switch(input)
        {
            case 1: 
                MET = 7;
                break;
            case 2: 
                MET = 5.5;
                break;
            case 3: 
                MET = 3.3;
                break;
            case 4: 
                MET = 8;
                break;
            case 5: 
                MET= 3;
                break;
            case 6: 
                MET= 7;
                break;
            case 7: 
                MET= 3.3;
                break;
            case 8: 
                MET= 3.3;
                break;
            case 9: 
                MET= 8;
                break;
            case 10: 
                MET= 0;
                break;
        }
        
        if(input<10)
        {
            printf("How many hours did you perform it for?");
            scanf("%d",&duration);
            total=(BMR*MET)/(24*duration);
        }
        
        printf("%d\n",MET);
        printf("%d\n",duration);
        printf("%d\n",total);
        
    } while (input<10);
      
}

       


