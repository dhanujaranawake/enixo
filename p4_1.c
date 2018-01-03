/* ©2017 Dhanuja Ranawake. All rights reserved.

#include <stdio.h>

int main()
{
    int number, positive = 0, negative = 0, zero = 0,remain = 10;


    do
    {
        printf("Enter a number :");
        scanf("%d", &number);

        if (number > 0)
        {
            positive++;
        }
        else if (number < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }

        remain--;

    }while (remain != 0);


    printf("\nPositive Numbers :%d\nNegative Numbers :%d\nZero Numbers :%d",
           positive, negative, zero);


    return 0;
}*/