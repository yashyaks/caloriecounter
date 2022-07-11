#include<stdio.h>
#include<string.h>
void main()
{
char fooditems[][100] = {"1]Rice", "2]Roti(1)=71 calories"};
     int i,cmp,servings;
     char p[100];
     for(i=0;i<=2;i++)
    {   
         printf("%s\n",fooditems[i]);
    }
    for(i=0;i<=2;i++)
    {   
            printf("What did you have?");
            scanf("%s",p);
            cmp=strcmp(fooditems[i],p);
            printf("how many servings did you have?");
            scanf("%d",&servings);

            

    }
}