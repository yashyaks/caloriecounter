//solution using structure
#include<stdio.h>
#include<string.h>
struct fooditem
{
	int n;
    char name[10];
	int cal;
};
void main()
{
    int i,j,cmp,servings,input,calorie,total;
    char s[10];
    struct fooditem f[100];
    struct fooditem f0 = {1,"rice",30};
    struct fooditem f1 = {2,"roti",50};
    struct fooditem f2 = {3,"done",0};


    printf("%d]%s\t%d\n",f0.n,f0.name,f0.cal);
    printf("%d]%s\t%d\n",f1.n,f1.name,f1.cal);
    printf("%d]%s\n",f2.n,f2.name);

    do
    {
        printf("What did you have?");
        scanf("%d",input);
        calorie=f[input].cal;
        if(input=!3)
        {
            printf("how many servings did you have?");
            scanf("%d",&servings);
            total=total+calorie*servings;
         }
        else
        {
            printf("%d");
        }

            
        
    
    } while (input=!3);
    




    printf("size of structure fooditem=%d\n",sizeof(struct fooditem));
    printf("size of structure fooditem=%d %d",sizeof(f[0]),sizeof(f[1]));
}
    

       


