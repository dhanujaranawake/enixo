/* ©2017 Dhanuja Ranawake. All rights reserved.

#include <stdio.h>

int main()
{

    char switchs;
    float cir, are, vol, rad;

    printf("Choose what to find\n 1.Circumference in circle \n 2.Area in a circle\n 3.Volume in sphere");
    scanf(" %c", &switchs);
    printf("Enter the radius");
    scanf(" %f", &rad);

    switch (switchs){
        case '1': printf("2*3.14*%.2f\n", rad);

                    cir = (2*3.14)*rad;
                    printf("%.2f", cir);
                    break;
        case '2': printf("3.14*%.2f*%.2f\n", rad, rad);
                    are = (3.14)*rad*rad;
                    printf("%.2f", are);
                    break;
        case '3': printf("3.14*%.2f*%.2f\n", rad, rad);
            are = (3.14)*rad*rad;
            printf("%.2f", are);
            break;}

    return 0;
}

*/