/* ©2017 Dhanuja Ranawake. All rights reserved.

#include <stdio.h>

int main()
{
    int i;
    float marks, avg, tot=0;
    printf("Enter the marks");
    for(i=1; i<=10; i++){
        scanf(" %f", &marks);
        tot += marks;
    }
    avg = tot/10;
    (avg>=50) ? printf("Pass") : printf("Fail");

    return 0;
}

*/

