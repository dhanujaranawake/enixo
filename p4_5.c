/* ©2017 Dhanuja Ranawake. All rights reserved

#include <stdio.h>
int main(){
    int i=0,num[100],hou[100];
    float over,per,count=0,peo=0;

    while (num[i] != -999){
        printf("Enter the employee number:");
        scanf(" %d", &num[i]);
        if (num[i] != -999){
            printf("Hours worked:");
            scanf(" %d", &hou[i]);
        }else
            break;
        if (hou[i]>40){
            over = (40 *150) + ((hou[i]-40)*200);
        }else
            over = (hou[i]*150);
        if (over > 4000){
            count++;
        }
        printf("over %.2f\n",over);
        i++;
        peo++;
    }
    per = (count/peo)*100;

    printf("%.2f",per);
    return 0;
}
*/