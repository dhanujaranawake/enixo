/* ©2017 Dhanuja Ranawake. All rights reserved.
#include <stdio.h>

int main() {

    char city,years;
    float sales, over5, new;

    printf(" Number of Monthly Sales: ");
    scanf(" %f", &sales);
    printf(" Do u have more than 5 years of Service(y/n): ");
    scanf(" %c", &years);
    printf(" Are you from Colombo then press c else press n: ");
    scanf(" %c", &city);
    if (sales<=25000){
        new = sales + (sales*0.1);
    } else if(sales<50000){
        new = sales + (sales*0.12);
    } else {
        new = sales + (sales*0.15);
    }

    if (years == 'y'){
        over5 = (sales*0.1);
        new = new + over5;
    }
    if (city == 'c'){
        new = new + 2500;
    }
    printf("Gross monthly remuneration %.2f",new);

    return 0;
}
*/