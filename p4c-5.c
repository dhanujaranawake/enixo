/* ©2017 Dhanuja Ranawake. All rights reserved.

#include <stdio.h>

int main()
{
    int sum=0, n, i;
    printf("Enter a number to reverse ");
    scanf(" %d", &n);
    do {
        i = n % 10;
        sum = (sum*10) + i;
        n = n/10;

    }while (n >0);
    printf("%d", sum);
    return 0;
}

*/