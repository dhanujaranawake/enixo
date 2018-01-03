/* ©2017 Dhanuja Ranawake. All rights reserved.

#include <stdio.h>

int main()
{
    int i=0,j,n;
    printf("Enter a number");
    scanf(" %d", &n);
    while (n > 0){
        j = n % 10;
        i += j;
        n = n/10;

    }
    printf("Sum %d", i);
    return 0;
}

*/