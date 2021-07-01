#include <stdio.h>
#include <string.h>

int main(){
    int i,totalSold[10],comissionPercent[10],biggestComission = -1,smallestComission = 999999,iRich,iPoor;
    double comissionValue,totalRevenue = 0,Percent;
    char clerkName[10][20];

    for(i=0;i<10;i++){
        printf("Enter the total sold by the %d clerk:", i+1);
        scanf("%d", &totalSold[i]);
    }
    for(i=0;i<10;i++){
        printf("Enter the comission percent of the %d clerk:", i+1);
        scanf("%d", &comissionPercent[i]);
    }
    for(i=0;i<10;i++){
        printf("Enter the %d clerk name:", i+1);
        scanf("%s", &clerkName[i]);
    }

    for(i=0;i<10;i++){
        totalRevenue += totalSold[i];
        Percent = (double)comissionPercent[i]/100;
        comissionValue = (double)totalSold[i] * Percent;
        printf("Name:%s - Comission: %.1lf\n", clerkName[i], comissionValue);
        if(comissionValue > biggestComission){
            biggestComission = comissionValue;
            iRich = i;
        }
        if(comissionValue < smallestComission){
            smallestComission = comissionValue;
            iPoor = i;
        }
    }
    printf("The %s clerk had the biggest comission with the value of: %d\n", clerkName[iRich], biggestComission);
    printf("The %s clerk had the smallest comission with the value of: %d\n", clerkName[iPoor], smallestComission);


return 0;
}