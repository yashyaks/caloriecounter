#include <stdio.h>
#include <string.h>
#include <stdlib.h>
float maintain,diff;
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
} s[10];

struct exercise
{
    int m;
    char exc[17];
    float MET;
} e[10];
float bmr(float h, float w, float a, char g, float Bmr)
{
    if ((g == 'F') || (g == 'f'))
    {
        Bmr = 447.593 + (9.247 * w) + (3.098 * h) - (4.33 * a);
    }
    else if ((g == 'M') || (g == 'm'))
    {
        Bmr = 88.362 + (13.397 * w) + (4.799 * h) - (5.677 * a); // bmr formula for males
    }
    else
    {
        printf("Invalid Gender specified");
    }
    return (Bmr);
}
int main()
{
    int cmp, y, totcal = 0, servings, Grandtotal = 0, temp = 1, choice;
    int l;
    char input[200];
    char fooditems[][1000] = {"Rice", "Roti", "Poha", "Vegetables", "MoongDal", "Beverages", "Fruits", "Burger", "BoiledEggs", "VadaPav", "Done"};
    int i, j, n;
    int number;
    float BMR, a, t, calburnt, Bmr, sum = 0, cod;
    char g;
    char pass[100];
    char name[100];
    char uid[100];
    char userinput[100];
    char copyuid[100];
    char copypass[100];

    printf("------------------------------------------------------------------------------------------------------------------\n\n");
    printf("\t\t   .o88b.  .d8b.  db       .o88b.  .d88b.  db    db d8b   db d888888b \n");
    printf("\t\t  d8P  Y8 d8' `8b 88      d8P  Y8 .8P  Y8. 88    88 888o  88 `~~88~~' \n");
    printf("\t\t  8P      88ooo88 88      8P      88    88 88    88 88V8o 88    88    \n");
    printf("\t\t  8b      88~~~88 88      8b      88    88 88    88 88 V8o88    88    \n");
    printf("\t\t  Y8b  d8 88   88 88booo. Y8b  d8 `8b  d8' 88b  d88 88  V888    88    \n");
    printf("\t\t   `Y88P' YP   YP Y88888P  `Y88P'  `Y88P'  ~Y8888P' VP   V8P    YP    \n\n");
    printf("------------------------------------------------------------------------------------------------------------------\n\n");
    printf("To Create a new account\n");
    printf("Please enter Your Name:\n");
    scanf("%s", name);
    printf("Enter your username:\n");
    scanf("%s", uid);
 passw:
    printf("Enter a password (8 characters minimum):\n");
    scanf("%s", pass);
    l = strlen(pass);
    if (l < 8)
    {
        // printf("Enter a password (8 characters minimum):\n\n");
        goto passw;
    }
    else
    {   
        system("CLS");
        printf("------------------------------------------------------------------------------------------------------------------\n");
        printf("\nHello %s!\n", name);
        printf("To login:\n");
    }
uidg:
    printf("Enter your username:\n");
    gets(copyuid);

    if ((strcmp(uid, copyuid)) == 0)
    {
    passg:
        printf("Enter Your password\n");
        gets(copypass);
        if ((strcmp(pass, copypass)) == 0)
        {
            printf("\n*WELCOME TO THE PAGE*\n\n");
        }
        else
        {
            printf("Please enter the right password: \n");
            goto passg;

        }
    }
    else
        goto uidg;
    // system("CLS"); <-- this will remove pehele wala output but we need a time delay for this..
    printf(" Please enter your Height in centimetres:\n");
    scanf("%f", &h);
    printf("Please enter your Weight in Kilograms:\n");
    scanf("%f", &w);
    printf("Please enter your  Age in Years:\n");
    scanf("%f", &a);
    printf("Please enter your Gender (Male or Female):\n");
    _flushall();
    scanf("%c", &g);
    printf("------------------------------------------------------------\n");
    BMI = bmi(h, w);
    if (BMI <= 18.4)
        printf("\nYour BMI is %f and you are underweight.\n\n", BMI);
    else if (BMI >= 18.5 && BMI <= 24.9)
        printf("\nYour BMI is %f and you are normal.\n\n", BMI);
    else if (BMI >= 25.0 && BMI <= 39.9)
        printf("\nYour BMI is %f and you are overweight.\n\n", BMI);
    else if (BMI >= 40.0)
        printf("\nYour BMI is %f and you are obese.\n\n", BMI);

    printf("-----------------------------------------------------------\n");
    printf("To count the amount of calories you have eaten-->\n ");
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
        printf("\nTotal amount of calories consumed is : %d calories.\n\n", Grandtotal);
        // return;
        temp = 0;
    }
    if (temp == 1)
    {
        printf("Enter the number of servings:\n");
        scanf("%d", &servings);
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

    BMR = bmr(h, w, a, g, Bmr);
    printf("------------------------------------------------------------\n");
    printf("\nYour Basal Metabolic Rate (BMR) is:\n%f\n", BMR);
    printf("------------------------------------------------------------\n\n");

    struct exercise e[] = {{1, "Swimming", 7}, {2, "Cycling", 5.5}, {3, "Running", 8}, {4, "Jogging", 7}, {5, "Aerobics", 3.3}, {6, "Walking", 3.3}, {7, "Weight Training", 3.3}, {8, "Calesthenics", 8}, {9, "Yoga", 3}, {10, "Cross-fit", 8}};
    for (int i = 0; i <= 8; i++)
    {
        printf("%d] %s", e[i].m, e[i].exc);
        printf("\n");
    }
    printf("How many of the following exercises did you perform?\n");
    scanf("%d", &n);
    for (int i = 0; i <= n - 1; i++)
    {

        printf("Enter exercise name & duration (in hours) for each exercise performed:\n");
        scanf("%s%f", &s[i].name, &s[i].times);
    }
    printf("Exercise name\tDuration(hrs)\t Calories burnt\n");
    printf("--------------------------------------------------------\n");

    for (i = 0; i <= 7; i++)
    {
        if (strcmpi(s[i].name, e[0].exc) == 0)
        {
            s[i].answer = ((BMR * 5.5) / (24 * s[i].times));
            printf("%s\t\t%f\t\t%f\n", s[i].name, s[i].times, s[i].answer);
        }

        else if (strcmpi(s[i].name, e[1].exc) == 0)
        {
            s[i].answer = ((BMR * 3.3) / (24 * s[i].times));
            printf("%s\t\t%f\t\t%f\n", s[i].name, s[i].times, s[i].answer);
        }

        else if (strcmpi(s[i].name, e[2].exc) == 0)
        {
            s[i].answer = ((BMR * 7.5) / (24 * s[i].times));
            printf("%s\t\t%f\t\t%f\n", s[i].name, s[i].times, s[i].answer);
        }

        else if (strcmpi(s[i].name, e[3].exc) == 0)
        {
            s[i].answer = ((BMR * 3.0) / (24 * s[i].times));
            printf("%s\t\t%f\t\t%f\n", s[i].name, s[i].times, s[i].answer);
        }

        else if (strcmpi(s[i].name, e[4].exc) == 0)
        {
            s[i].answer = ((BMR * 7) / (24 * s[i].times));
            printf("%s\t\t%f\t\t%f\n", s[i].name, s[i].times, s[i].answer);
        }

        else if (strcmpi(s[i].name, e[5].exc) == 0)
        {
            s[i].answer = ((BMR * 3.3) / (24 * s[i].times));
            printf("%s\t\t%f\t\t%f\n", s[i].name, s[i].times, s[i].answer);
        }

        else if (strcmpi(s[i].name, e[6].exc) == 0)
        {
            s[i].answer = ((BMR * 3.3) / (24 * s[i].times));
            printf("%s\t\t%f\t\t%f\n", s[i].name, s[i].times, s[i].answer);
        }

        else if (strcmpi(s[i].name, e[7].exc) == 0)
        {
            s[i].answer = ((BMR * 8) / (24 * s[i].times));
            printf("%s\t\t%f\t\t%f\n", s[i].name, s[i].times, s[i].answer);
        }
        else if (strcmpi(s[i].name, e[8].exc) == 0)
        {
            s[i].answer = ((BMR * 8) / (24 * s[i].times));
            printf("%s\t\t%f\t\t%f\n", s[i].name, s[i].times, s[i].answer);
        }

        else
        {
            break;
        }

        sum = sum + s[i].answer;
    }

    printf("\n\nYou have burnt %f calories in total!!", sum);
    cod = Grandtotal - sum;
    maintain = BMR * 1.2;
    diff = maintain - cod ;
    printf("\n\n The amount of calories you have counsumed after the workout is : %f cal. \n\n", cod);
    printf("Your maintenance calories are : %f cal.\n\n",maintain);
    if(diff > 50)
    {
        printf("You need to CONSUME %f calories.\n\n",maintain - cod);
    }
    else if (diff < -50)
    {
        printf("You need to BURN %f calories.\n\n",cod - maintain);
    }
    else if (cod = maintain)
    printf("Your goal has been ACHIEVED!!\n\n HURRRAYYYY!!!!!\n\n\n");
    printf("Thank you for using our application :D\n\n");

    return 0;
}