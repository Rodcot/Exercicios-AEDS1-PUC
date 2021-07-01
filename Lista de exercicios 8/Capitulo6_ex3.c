#include <stdio.h>

int main(){
    int productC[10],productS[10],i,j,customerID[9999],k=0,customerProduct,flag,stockAvailable,customerStock,iCustomerBought;

    
    for(i=0;i<10;i++){
        printf("Enter the product code and its stock:");
        scanf("%d %d", &productC[i], &productS[i]);
    }

    LOOP:
    for(;;){
        printf("Enter the customer code (0 - Exits the program):");
        scanf("%d", &customerID[k]);

        if(customerID[k] == 0){
            printf("Finalizing the program.\n");
            goto END;
        }

        printf("Enter the code of the product for the purchase:");
        scanf("%d", &customerProduct);

        for(i=0;i<10;i++){
            if(customerProduct == productC[i]){
                flag = 1;
                iCustomerBought = i;
            }
        }
        stockAvailable = productS[iCustomerBought];

        if(flag != 1){
            printf("The product code entered was INVALID.\n");
            goto LOOP;
        }

        printf("Enter the amount you want of the item (only %d in stock):", stockAvailable);
        scanf("%d", &customerStock);

        if(customerStock > stockAvailable){
            printf("Not enough stock available for that purchase.\n");
            goto LOOP;
        }else{
            printf("Thank you for your purchase.\n");
            productS[iCustomerBought] = productS[iCustomerBought] - customerStock;
        }

        k++;
    }
END:

printf("Updated stock after all purchases:\n");
for(i=0;i<10;i++){
    printf("Product Code: %d - Amount in Stock: %d /// ", productC[i], productS[i]);
}

return 0;
}