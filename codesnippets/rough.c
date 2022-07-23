#include <stdio.h>

// Create a structure
struct excercise {
  int n;
  char name[20];
  int MET;
};

int main()
 {

    int i,duration,input;
    float h,w,BMR,a,t,calburnt=0,MET;
    char g;

    struct excercise e[10]; 
    // Create a structure variable and assign values to it
    //struct myStructure s1 = {13, 'B', "Some text"};

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

    // Print values
    //printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

    printf("Sr.No.\tExcercise\tMET\n");
    printf("---------------------------------------------------------------------\n");

    
    // displaying information
    for (i = 0; i < 10; ++i) 
    {
        printf("%x] %x %x\n",e[i].n,e[i].name,e[i].MET);
        //printf("%d\n",i);
    }


/*printf("%d]\t%s\t\t%f\n",e[i].n,e[i].excercise,e[i].MET);
         printf("%d\n",i);
    */return 0;
}