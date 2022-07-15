//solution using structure
#include<stdio.h>
#include<string.h>
struct fooditem
{
    int n;
    char name[10];
    int cal;
}f[3];
/*struct point 
{
    int x;
    char y;
    int z;
};*/
void main()
{
    int i,servings,input,calorie,total=0;


    struct fooditem f[3];                     
    struct fooditem f0 = {1,"rice",30};
    *F0 = &f0;
    struct fooditem f1 = {2,"roti",50};
    *F1 = &f1;
    struct fooditem f2 = {3,"done",0};

    /*struct fooditem *rice,f0;
    rice = &f0; 
    printf("%d", &rice->cal);*/

    /*printf("%d]%s\t%d\n",f0.n,f0.name,f0.cal);              //1--->figure out a way to do this way more elegantly(this one works but dont wanna type this a thousand times)
    printf("%d]%s\t%d\n",f1.n,f1.name,f1.cal);
    printf("%d]%s\n",f2.n,f2.name);*/

    for(i=0;i<3;i++)
    {
         printf("%d]%s %d\n",f[i].n,f[i].name,f[i].cal);
         //printf("%s",f[i].name);                              //1--->this for loop is supposed to work perfectly but doesnt see file delthisb4commit.c it works there
         //printf("%d\n",f[i].cal);
    }
   // printf("%d]%s %d", f[0].n, f[0].name, f[0].cal);

    do
    {
        printf("What did you have?");
        scanf("%d",&input);

        //calorie = F0->cal; 
         //this has to be done using pointers figure out how(did this but still have to find a way to let it decide this on its own instead of switchcase or if else)                             
        if(input!=3)
        {
            printf("how many servings did you have?");
            scanf("%d",&servings);
            total=total+calorie*servings;
         }

        printf("%d\n",calorie);
        printf("%d\n",total);
        printf("%d\n",servings);
        printf("%d\n",total);

    } while (input<3);

//solution using structure
#include<stdio.h>
#include<string.h>
struct fooditem
{
    int n;
    char name[10];
    int cal;
}f[3];
/*struct point 
{
    int x;
    char y;
    int z;
};*/
void main()
{
    int i,servings,input,calorie,total=0;


    struct fooditem f[3];                     
    struct fooditem f0 = {1,"rice",30};
    *F0 = &f0;
    struct fooditem f1 = {2,"roti",50};
    *F1 = &f1;
    struct fooditem f2 = {3,"done",0};

    /*struct fooditem *rice,f0;
    rice = &f0; 
    printf("%d", &rice->cal);*/

    /*printf("%d]%s\t%d\n",f0.n,f0.name,f0.cal);              //1--->figure out a way to do this way more elegantly(this one works but dont wanna type this a thousand times)
    printf("%d]%s\t%d\n",f1.n,f1.name,f1.cal);
    printf("%d]%s\n",f2.n,f2.name);*/

    for(i=0;i<3;i++)
    {
         printf("%d]%s %d\n",f[i].n,f[i].name,f[i].cal);
         //printf("%s",f[i].name);                              //1--->this for loop is supposed to work perfectly but doesnt see file delthisb4commit.c it works there
         //printf("%d\n",f[i].cal);
    }
   // printf("%d]%s %d", f[0].n, f[0].name, f[0].cal);

    do
    {
        printf("What did you have?");
        scanf("%d",&input);

        //calorie = F0->cal; 
         //this has to be done using pointers figure out how(did this but still have to find a way to let it decide this on its own instead of switchcase or if else)                             
        if(input!=3)
        {
            printf("how many servings did you have?");
            scanf("%d",&servings);
            total=total+calorie*servings;
         }

        printf("%d\n",calorie);
        printf("%d\n",total);
        printf("%d\n",servings);
        printf("%d\n",total);

    } while (input<3);

}