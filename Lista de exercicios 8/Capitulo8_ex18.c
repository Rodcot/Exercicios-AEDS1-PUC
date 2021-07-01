#include <stdio.h>

int PrimeTesting(int n){
    int con=0, i;

    for(i = 1; i <= n; i++){
        if(n % i==0){
            con++;
        }
    }

    if(con == 2){
        return 1;
    }else{
        return 0;
    }
}

void PrimeSaver(int vet[3]){
    int count=0, i, x;

    for(i = 100 ; count<11; i++){
        x = PrimeTesting(i);

        if(x == 1){
            vet[count] = i;
            count++;
        }
    }
}

void Print(int vet[3]){
    int i;

    printf("First 3 prime numbers above 100:\n");

    for(i = 0; i < 3; i++){
        printf("%d: %d\n", i+1, vet[i]);
    }
}

int main(){
    int vet[3];

    PrimeSaver(vet);
    Print(vet);

    return 0;
}