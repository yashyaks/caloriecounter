//prototype code for using array and switch case to
//make lists of fooditems

#include<stdio.h>
#include<string.h>
int main(){
    int cmp, y;
    char input[100];
    char fooditems[][100] = {"Rice","Roti", "Fruits"};
    for(int i=0;i<3;i++)
    {
        printf("%s\n",fooditems[i]);
    }
    printf("\nEnter an item");
    scanf("%s", input);
    for (int i = 0; i < 3; ++i)
    {
        cmp = strcmp(fooditems[i], input);
        if(cmp==0)
        {
            y = i + 1;
        }
    }
    switch(y){
        case 1:
        printf("\nrice yess");

        break;
        case 2:
        printf("\nroti yess");
        break;
        case 3:
        printf("\nFruits yess");
        break;
        default:
        printf("\nInvalid option");
    }
    return 0;

}
