#include <stdio.h>

int main(){
    int i,j,price[10],stock[5][10],totalStored0=0,totalStored1=0,totalStored2=0,totalStored3=0,totalStored4=0,biggestStock=-99999,productMostStockedJ,smallestStock=99999;
    int totalProduct0=0,totalProduct1=0,totalProduct2=0,totalProduct3=0,totalProduct4=0,totalProduct5=0,totalProduct6=0,totalProduct7=7,totalProduct8=0,totalProduct9=0;
    int warehousePrice0=0,warehousePrice1=0,warehousePrice2=0,warehousePrice3=0,warehousePrice4=0;

    for(i=0;i<10;i++){
        printf("Enter Product's %d price:", i+1);
        scanf("%d", &price[i]); 
    }
    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            printf("Enter product %d's quantity stored in Warehouse %d:", j+1, i+1);
            scanf("%d", &stock[i][j]); 
        } 
    }

    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            if(i == 0){
                totalStored0 += stock[i][j];
                warehousePrice0 += stock[i][j] * price[j];
            }else if(i == 1){
                totalStored1 += stock[i][j];
                warehousePrice1 += stock[i][j] * price[j];
            }else if(i == 2){
                totalStored2 += stock[i][j];
                warehousePrice2 += stock[i][j] * price[j];
            }else if(i == 3){
                totalStored3 += stock[i][j];
                warehousePrice3 += stock[i][j] * price[j];
            }else if(i == 4){
                totalStored4 += stock[i][j];
                warehousePrice4 += stock[i][j] * price[j];
            }

            if(j == 0){
                totalProduct0 += stock[i][j];
            }else if(j == 1){
                totalProduct1 += stock[i][j];
            }else if(j == 2){
                totalProduct2 += stock[i][j];
            }else if(j == 3){
                totalProduct3 += stock[i][j];
            }else if(j == 4){
                totalProduct4 += stock[i][j];
            }else if(j == 5){
                totalProduct5 += stock[i][j];
            }else if(j == 6){
                totalProduct6 += stock[i][j];
            }else if(j == 7){
                totalProduct7 += stock[i][j];
            }else if(j == 8){
                totalProduct8 += stock[i][j];
            }else if(j == 9){
                totalProduct9 += stock[i][j];
            }

            if(stock[i][j]> biggestStock){
                biggestStock = stock[i][j];
                productMostStockedJ = j;
            }
            if(stock[i][j]<smallestStock){
                smallestStock = stock[i][j];
            }    
        } 
    }

    printf("The total of products stored in Warehouse 1 is: %d\n", totalStored0); 
    printf("The total of products stored in Warehouse 2 is: %d\n", totalStored1);
    printf("The total of products stored in Warehouse 3 is: %d\n", totalStored2);
    printf("The total of products stored in Warehouse 4 is: %d\n", totalStored3);
    printf("The total of products stored in Warehouse 5 is: %d\n", totalStored4);

    printf("The total quantity of Product's 1 stock in all Warehouses is: %d\n", totalProduct0);
    printf("The total quantity of Product's 2 stock in all Warehouses is: %d\n", totalProduct1);
    printf("The total quantity of Product's 3 stock in all Warehouses is: %d\n", totalProduct2);
    printf("The total quantity of Product's 4 stock in all Warehouses is: %d\n", totalProduct3);
    printf("The total quantity of Product's 5 stock in all Warehouses is: %d\n", totalProduct4);
    printf("The total quantity of Product's 6 stock in all Warehouses is: %d\n", totalProduct5);
    printf("The total quantity of Product's 7 stock in all Warehouses is: %d\n", totalProduct6);
    printf("The total quantity of Product's 8 stock in all Warehouses is: %d\n", totalProduct7);
    printf("The total quantity of Product's 9 stock in all Warehouses is: %d\n", totalProduct8);
    printf("The total quantity of Product's 10 stock in all Warehouses is: %d\n", totalProduct9);

    printf("The product %d has the biggest stock in a single Warehouse with: %d units\n", productMostStockedJ, biggestStock);
    printf("The smallest stock in any warehouse is: %d\n", smallestStock);

    printf("The total price of Warehouse 1 is: %d\n", warehousePrice0); 
    printf("The total price of Warehouse 2 is: %d\n", warehousePrice1);
    printf("The total price of Warehouse 3 is: %d\n", warehousePrice2);
    printf("The total price of Warehouse 4 is: %d\n", warehousePrice3);
    printf("The total price of Warehouse 5 is: %d\n", warehousePrice4);

return 0;
}