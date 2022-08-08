#include <stdio.h>
#include <string.h>
#include<stdlib.h>

float BMI, h, w, a, g;
float bmi(float x, float y)
{
    float ans;
    ans = (10000 * y) / (x * x);
    return ans;
}
struct userinformation
{
    char name[10];
    float times;
    float answer;
}s[10];

struct exercise
{
    int m;
    char exc[17];
    float MET;
}e[10];
float bmr(float h,float w,float a,char g,float Bmr)
{
    if ((g=='F')||(g=='f'))
    {
        Bmr=447.593+(9.247*w)+(3.098*h)-(4.33*a);

    }
    else if ((g=='M')||(g=='m'))
    {
        Bmr=88.362+(13.397*w)+(4.799*h)-(5.677*a);               //bmr formula for males
    }
    else
    {
        printf("Invalid Gender specified");
    }
    return(Bmr);
}
int main()
{
    int cmp, y, totcal = 0, servings, Grandtotal = 0, temp = 1, choice;
    int l;
    char input[200];
    char fooditems[][1000] = {"Rice", "Roti", "Poha", "Vegetables", "MoongDal", "Beverages", "Fruits", "Burger", "BoiledEggs", "VadaPav", "Done"};
    int i,j,n;
    int number;
    float BMR,a,t,calburnt,Bmr,sum=0,cod;
    char g;
    char pass[100];
    char name[100];
    char uid[100];
    char userinput[100];
    char copyuid[100];
    char copypass[100];

    printf("Enter Your Name\n");
    scanf("%s",name);
    printf("Hello %s\n",name);
    printf("Create a new account\n");
    printf("Enter your username");
    scanf("%s",uid);
     passw:printf("Enter your password");
    scanf("%s",pass);
     l=strlen(pass);
    if(l<8)
    {
       printf("Enter a password of minimum 8 characters\n");
       goto passw;
    }
    else
    {
    printf("Go to login\n");

    }
   uidg: printf("Enter your username\n");
   gets(copyuid);

    if((strcmp(uid,copyuid))==0)
    {
        passg:printf("Enter Your password\n");
        gets(copypass);
        if((strcmp(pass,copypass))==0)
        {
            printf("WELCOME TO THE PAGE");
        }
        else
        {
        printf("Reenter the password\n");
        goto passg;
        }
    }
    else
    goto uidg;
printf("------------------------------------------------------------------------------------------------------------------\n\n");

    printf("\t\t   .o88b.  .d8b.  db       .o88b.  .d88b.  db    db d8b   db d888888b \n");
    printf("\t\t  d8P  Y8 d8' `8b 88      d8P  Y8 .8P  Y8. 88    88 888o  88 `~~88~~' \n");
    printf("\t\t  8P      88ooo88 88      8P      88    88 88    88 88V8o 88    88    \n");
    printf("\t\t  8b      88~~~88 88      8b      88    88 88    88 88 V8o88    88    \n");
    printf("\t\t  Y8b  d8 88   88 88booo. Y8b  d8 `8b  d8' 88b  d88 88  V888    88    \n");
    printf("\t\t   `Y88P' YP   YP Y88888P  `Y88P'  `Y88P'  ~Y8888P' VP   V8P    YP    \n\n");
    printf("------------------------------------------------------------------------------------------------------------------\n\n");
    // system("CLS"); <-- this will remove pehele wala output but we need a time delay for this..
    printf("Please enter your height in Centimetres:\n");
    scanf("%f", &h);
    printf("Please enter your weight in Kilograms:\n");
    scanf("%f", &w);
    printf("Enter age in yrs:");
    scanf("%f",&a);
    printf("Enter gender M/F:");
    _flushall();
    scanf("%c",&g);
    BMI = bmi(h, w);
    if (BMI <= 18.4)
        printf("Your BMI is %f and you are underweight.\n\n", BMI);
    else if (BMI >= 18.5 && BMI <= 24.9)
        printf("Your BMI is %f and you are normal.\n\n", BMI);
    else if (BMI >= 25.0 && BMI <= 39.9)
        printf("Your BMI is %f and you are overweight.\n\n", BMI);
    else if (BMI >= 40.0)
        printf("Your BMI is %f and you are obese.\n\n", BMI);

    printf("Choose from the following food items:\n");
    for (int i = 0; i <= 10; i++)
    {
        printf("%s\n", fooditems[i]);
    }

again:

    printf("\nEnter the food item you have eaten:\n");
    scanf("%s", input);
    goto back;

back:
    if (strcmp(fooditems[10], input) == 0)
    {
        totcal = 0 * totcal;
        Grandtotal = Grandtotal + totcal;
        // printf("total calories is %d",totcal);
        printf("\nTotal amount of calories consumed is : %d calories.", Grandtotal);
        //return;
        temp=0;
    }
    if (temp == 1)
    {
        printf("Enter the number of servings:\n");
        scanf("%d", &servings);
    }
    else
    {
        printf("\nTotal amount of calories consumed is : %d calories.", Grandtotal);
    }

    for (int i = 0; i <= 10; ++i)
    {

        cmp = strcmp(fooditems[i], input);
        if (cmp == 0)
        {
            y = i + 1;
        }

    }
    switch (y)
    {
    case 1: //  Rice
        printf("Which of the following type of Rice did you eat : \n1) Fried Rice\n2) Jeera Rice\n3) Veg Pulao \nYour Choice = ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            totcal = 228 * servings;
            Grandtotal = Grandtotal + totcal;
            printf("\nCalories consumed by eating Fried Rice = %d cal.\n", totcal);
            printf("Total amount of calories consumed = %d cal.\n\n", Grandtotal);

        }
        else if (choice == 2)
        {
            totcal = 200 * servings;
            Grandtotal = Grandtotal + totcal;
            printf("\nCalories consumed by eating Jeera Rice = %d cal.\n", totcal);
            printf("Total amount of calories consumed = %d cal.\n\n", Grandtotal);

        }
        else if (choice == 3)
        {
            totcal = 265 * servings;
            Grandtotal = Grandtotal + totcal;
            printf("\nCalories consumed by eating Veg Pulao = %d cal.\n", totcal);
            printf("Total amount of calories consumed = %d cal.\n\n", Grandtotal);

        }
        else
            {
                printf("Invalid Option!");
            }
        goto again;

    case 2: // Roti
        totcal = 122 * servings;
        Grandtotal = Grandtotal + totcal;
        printf("Calories consumed by eating Roti = %d cal.\n", totcal);
        printf("Total amount of calories consumed = %d cal.\n\n", Grandtotal);
        goto again;

    case 3: // Poha

        totcal = 90 * servings;
        Grandtotal = Grandtotal + totcal;
        printf("Calories consumed by eating Poha = %d cal.\n", totcal);
        printf("Total amount of calories consumed = %d cal.\n\n", Grandtotal);

        goto again;

    case 4: // Vegetables

        printf("Which of the following Vegetables did you eat \n1) Okra\n2) Cabbage\n3) Potatoes\nYour Choice = ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            totcal = 461 * servings;
            Grandtotal = Grandtotal + totcal;
            printf("Calories consumed by having okra = %d cal.\n", totcal);
            printf("Total amount of calories consumed = %d cal.\n\n", Grandtotal);


        }
        else if (choice == 2)
        {
            totcal = 28 * servings;
            Grandtotal = Grandtotal + totcal;
            printf("Calories consumed by cabbage = %d cal.\n", totcal);
            printf("Total amount of calories consumed = %d cal.\n\n", Grandtotal);


        }
        else if (choice == 3)
        {
            totcal = 83 * servings;
            Grandtotal = Grandtotal + totcal;
            printf("Calories consumed by Potatoes = %d cal.\n", totcal);
            printf("Total amount of calories consumed = %d cal.\n\n", Grandtotal);


        }
        else
            printf("Invalid");
        goto again;

    case 5: // Moong Dal
        totcal = 351 * servings;
        Grandtotal = Grandtotal + totcal;
        printf("Calories consumed by eating Moong Dal = %d cal.\n", totcal);
        printf("Total amount of calories consumed = %d cal.\n\n", Grandtotal);

        goto again;

    case 6: // Beverages
        printf("Which of the following beverages did you drink:\n1) Tea\n2) coffee\nYour Choice = ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            totcal = 50 * servings;
            Grandtotal = Grandtotal + totcal;
            printf("\nCalories consumed by drinking Tea = %d cal.\n", totcal);
            printf("Total amount of calories consumed = %d cal.\n\n", Grandtotal);


        }
        else if (choice == 2)
        {
            totcal = 84 * servings;
            Grandtotal = Grandtotal + totcal;
            printf("\nCalories consumed by drinking Coffee = %d cal.\n", totcal);
            printf("Total amount of calories consumed = %d cal.\n\n", Grandtotal);

        }
        else
            printf("Invalid Option!");
        goto again;

    case 7:
        // fruits
        printf("Which of the following fruits did you eat:\n1)Apple\n2)Mangoes\n3)Banana\nYour Choice = ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            totcal = 52 * servings;
            Grandtotal = Grandtotal + totcal;
            printf("Calories consumed by eating Apples = %d cal.\n", totcal);
            printf("Total amount of calories consumed = %d cal.\n\n", Grandtotal);


        }
        else if (choice == 2)
        {
            totcal = 60 * servings;
            Grandtotal = Grandtotal + totcal;
            printf("Calories consumed by eating Mangoes = %d cal.\n", totcal);
            printf("Total amount of calories consumed = %d cal.\n\n", Grandtotal);


        }
        else if (choice == 3)
        {
            totcal = 89 * servings;
            Grandtotal = Grandtotal + totcal;
            printf("Calories consumed by eating Banana = %d cal.\n", totcal);
            printf("Total amount of calories consumed = %d cal.\n\n", Grandtotal);


        }
        else
            printf("Invalid");
        goto again;
    case 8: // Burger
        totcal = 465 * servings;
        Grandtotal = Grandtotal + totcal;
        printf("Calories consumed by eating Burgers = %d cal.\n", totcal);
        printf("Total amount of calories consumed = %d cal.\n\n", Grandtotal);
        goto again;
    case 9: // Boiled Eggs
        totcal = 72 * servings;
        Grandtotal = Grandtotal + totcal;
        printf("Calories consumed by eating Boiled Eggs = %d cal.\n", totcal);
        printf("Total amount of calories consumed = %d cal.\n\n", Grandtotal);
        goto again;
    case 10: // Vada Pav
        totcal = 263 * servings;
        Grandtotal = Grandtotal + totcal;
        printf("Calories consumed by eating Vada Pav = %d cal.\n", totcal);
        printf("Total amount of calories consumed = %d cal.\n\n", Grandtotal);
        goto again;
    case 11:
        // done
        break;
        system("CLS");
    }

    BMR=bmr(h,w,a,g,Bmr);
    printf("Your Basal Metabolic Rate(BMR) is %f",BMR);
    struct exercise e[]={{1,"Swimming",7},{2,"Cycling",5.5},{3,"Running",8},{4,"Jogging",7},{5,"Aerobics",3.3},{6,"Walking",3.3},{7,"Weight Training",3.3},{8,"Calesthenics",8},{9,"Yoga",3},{10,"Cross-fit",8}};
    for(int i=0;i<=8;i++)
    {
        printf("%d] %s",e[i].m,e[i].exc);
        printf("\n");
    }
    printf("How many of the following exercises did you perform?");
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++)
    {

        printf("Enter exercise name & duration for which it is performed");
        scanf("%s%f",&s[i].name,&s[i].times);


    }
    printf("Exercise name\tDuration(hrs)\tCalories burnt\n");
    printf("--------------------------------------------------------\n");

        for( i=0; i<=7;i++)
        {
        if(strcmpi(s[i].name,e[0].exc)==0)
        {
            s[i].answer=((BMR*5.5)/(24*s[i].times));
            printf("%s\t\t%f\t\t%f\n",s[i].name,s[i].times,s[i].answer);

        }

        else if(strcmpi(s[i].name,e[1].exc)==0)
        {
             s[i].answer=((BMR*3.3)/(24*s[i].times));
            printf("%s\t\t%f\t\t%f\n",s[i].name,s[i].times,s[i].answer);

        }

        else if(strcmpi(s[i].name,e[2].exc)==0)
        {
            s[i].answer=((BMR*7.5)/(24*s[i].times));
            printf("%s\t\t%f\t\t%f\n",s[i].name,s[i].times,s[i].answer);

        }

        else if(strcmpi(s[i].name,e[3].exc)==0)
        {
            s[i].answer=((BMR*3.0)/(24*s[i].times));
            printf("%s\t\t%f\t\t%f\n",s[i].name,s[i].times,s[i].answer);

        }

        else if(strcmpi(s[i].name,e[4].exc)==0)
        {
            s[i].answer=((BMR*7)/(24*s[i].times));
            printf("%s\t\t%f\t\t%f\n",s[i].name,s[i].times,s[i].answer);

        }

        else if(strcmpi(s[i].name,e[5].exc)==0)
        {
             s[i].answer=((BMR*3.3)/(24*s[i].times));
            printf("%s\t\t%f\t\t%f\n",s[i].name,s[i].times,s[i].answer);

        }

        else if(strcmpi(s[i].name,e[6].exc)==0)
        {
             s[i].answer=((BMR*3.3)/(24*s[i].times));
            printf("%s\t\t%f\t\t%f\n",s[i].name,s[i].times,s[i].answer);

        }

        else if(strcmpi(s[i].name,e[7].exc)==0)
        {
            s[i].answer=((BMR*8)/(24*s[i].times));
            printf("%s\t\t%f\t\t%f\n",s[i].name,s[i].times,s[i].answer);

        }
        else if(strcmpi(s[i].name,e[8].exc)==0)
        {
            s[i].answer=((BMR*8)/(24*s[i].times));
            printf("%s\t\t%f\t\t%f\n",s[i].name,s[i].times,s[i].answer);
        }

        else
        {
            break;

        }

        sum=sum+s[i].answer;

        }

    printf("You have burnt %f calories",sum);
    cod=Grandtotal-sum;
    printf("%f",cod);


    return 0;
}
