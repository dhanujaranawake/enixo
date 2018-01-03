/* ©2017 Dhanuja Ranawake. All rights reserved.

#include <stdio.h>

int main()
{
    int enter, i=1;
    printf("Enter a number to calculate factorial");
    scanf(" %d", &enter);
    while (enter >0){
        i *= enter;
        enter--;
    }
printf("factorial %d", i);
    return 0;
}

*/