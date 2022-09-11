//prototype using for calorie source
#include <stdio.h>
#include <string.h>

int main()
{
    int cmp, y, totcal = 0, servings, Grandtotal = 0, temp = 1;
    char input[100];
    char fooditems[][100] = {"Rice", "Roti", "Fruits", "Done"};
    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", fooditems[i]);
    }
again:
    printf("\nEnter an item\n");
    scanf("%s", input);
back:
    if (temp == 1)
    {
        printf("Enter the no of servings\n");
        scanf("%d", &servings);
    }
    else
    {
        printf("Grandtotal calories is %d", Grandtotal);
    }

    for (int i = 0; i < 4; ++i)
    {

        cmp = strcmp(fooditems[i], input);
        if (cmp == 0)
        {
            y = i + 1;
        }
    }
    switch (y)
    {
    case 1:
        totcal = 130 * servings;
        Grandtotal = Grandtotal + totcal;
        printf(" total calories is %d", totcal);
        printf("Grandtotal calories is %d", Grandtotal);

        goto again;
        goto back;
    case 2:
        totcal = 50 * servings;
        Grandtotal = Grandtotal + totcal;
        printf("total calories is %d", totcal);
        printf("Grandtotal calories is %d", Grandtotal);
        goto again;
        goto back;
    case 3:
        totcal = 100 * servings;
        Grandtotal = Grandtotal + totcal;
        printf("total calories is %d", totcal);
        printf("Grandtotal calories is %d", Grandtotal);

        goto again;
        goto back;
    case 4:
        servings = 0;
        Grandtotal = Grandtotal + totcal;
        // printf("total calories is %d",totcal);
        // printf("Grandtotal calories is %d",Grandtotal);
        break;
    }
    return 0;
}
