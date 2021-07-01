#include <stdio.h>

int main(){

int nproducts,i,lowprofit = 0, midprofit = 0, highprofit = 0;
double code, bprice, sprice,profit = 0, ptotal = 0, btotal = 0, stotal = 0; 

for(;;){
    printf("Enter the number of products or 0 to leave the program:\n");
    scanf("%d", &nproducts);

    if(nproducts == 0){
        printf("Leaving program.\n");
        goto LEAVE;
    }

    for(i = 0; i < nproducts; i++){
        printf("Enter the product code, buy price and sell price:\n");
        scanf("%lf %lf %lf", &code, &bprice, &sprice);

        profit = sprice - bprice;

        if(profit < bprice * 0.1){
            lowprofit++;
        }
        else if(profit >= bprice * 0.1 && profit <= bprice * 0.2){
            midprofit++;
        }
        else if(profit > bprice * 0.2){
            highprofit++;
        }
        ptotal = ptotal + profit;
        btotal = btotal + bprice;
        stotal = stotal + sprice;

    }
    printf("The number of products that gave < 10%% profit is: %d\n The number that gave between 10%% And 20%% is: %d\n and the number that gave more than 20%% profit is: %d\n", lowprofit, midprofit, highprofit);
    printf("The total profit was: %0.1lf\nThe total buy price was: %0.1lf\nThe total sell price was: %0.1lf\n", ptotal, btotal, stotal);
}

LEAVE:

return 0;
}