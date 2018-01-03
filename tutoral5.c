/* ©2017 Dhanuja Ranawake. All rights reserved

#include <stdio.h>
int main(){

    int i=0;
    float num[100], avg, total;
    for (i=0; i<10; i++)
    {
        printf("Enter the number: ");
        scanf(" %f", &num[i]);
        total += num[i];
    }
    avg = total/10;
    printf("Average is %.2f", avg);

    return 0;
}
*/