/* ©2017 Dhanuja Ranawake. All rights reserved.

#include <stdio.h>

int main()
{
    int arr[100];
    int i, max, min,tot;
    int avg;

    printf("Enter elements in the array: \n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i=1; i<10; i++) {

        if(arr[i]>max)
        {
            max = arr[i];
        }


        if(arr[i]<min)
        {
            min = arr[i];
        }
    }

    for(i=0; i<10; i++){
        tot += arr[i];
    }
    avg = tot/10;

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    printf("Average = %d", avg);

    return 0;
}
 */

