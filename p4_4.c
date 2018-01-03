/* ©2017 Dhanuja Ranawake. All rights reserved.

#include <stdio.h>
int main(){

    int i=0,eno[100],rich=0;
    float sal[100];
    while (eno[i] != -999) {
        printf("Enter the Employee no:");
        scanf(" %d", &eno[i]);
        if (eno[i] != -999) {
            printf("Enter the  basic salary: ");
            scanf(" %f", &sal[i]);
        } else
            break;
        if (sal[i] >= 5000) {
            rich++;
        }
        i++;
    }
    printf("Number of Employees that have more than 5000 basic %d",rich);
    return 0;
}
*/