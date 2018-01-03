/* ©2017 Dhanuja Ranawake. All rights reserved.

#include <stdio.h>

int main()
{
    int value[100];
    int i,tot=0,avg,over=0;

    for (i=0; i<10; i++){
        printf("Enter the value of the item: ");
        scanf(" %d", &value[i]);
        tot += value[i];
        if (value[i]>200){
            over++;
        }
    }

    avg= tot/10;
    printf("\nThe Average Value is %d\n", avg);
    printf("number of items that value are over 200 : %d\n",over);

    return 0;
}
*/