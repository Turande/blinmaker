#include <stdio.h>

int main()
{
    int eggsAmount;
    int eggsMin = 1;
    int milkAmount;
    int milkMin = 200; /* millilitres */
    int flourAmount;
    int flourMin = 100; /* grams */

    printf("Hello, Penny!\n");
    printf("Blinmaker starting up..\n");

    printf("How many eggs you have?");
    scanf("%d", &eggsAmount);
    //printf("You have %d eggs.\n", eggsAmount);

    printf("How much milk you have?");
    scanf("%d", &milkAmount);
    //printf("You have %dml of milk.\n", milkAmount);
    
    printf("How much flour you have?");
    scanf("%d", &flourAmount);
    //printf("You have %dg of flour", flourAmount);

    if (eggsAmount < eggsMin || flourAmount < flourMin || milkAmount < milkMin)
    {
        printf("No blins today :(\n");
    }
    else
    {
        flourAmount = flourAmount / flourMin;
        printf("You have %d portions of flour.\n", flourAmount);

        milkAmount = milkAmount / milkMin;
        printf("You have %d portions of milk.\n", milkAmount);

        int smallest = 0;
        if(eggsAmount <= milkAmount && milkAmount <= flourAmount)
        {
            smallest = eggsAmount;
        }
        else if(milkAmount <= flourAmount && milkAmount <= eggsAmount)
        {
            smallest = milkAmount;
        }
        else
        {
            smallest = flourAmount;
        }

        printf("\n");
        printf("You can make %d of blins\n", smallest * 4);
        printf("\n");
        printf("You will need %d eggs.\n", smallest * eggsMin);
        printf("You will need %d grams flour.\n", smallest * flourMin);
        printf("You will need %dml milk.\n", smallest * milkMin);
        printf("\n");
        printf("Blinmaker shutting down..\n");
    }

    return 0;

}
