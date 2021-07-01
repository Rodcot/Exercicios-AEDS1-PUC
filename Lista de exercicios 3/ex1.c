#include <stdio.h>

int main(){ 

int a1,a2,a3,a4;
int b1,b2,b3,b4;
int c1,c2,c3,c4;
int d1,d2,d3,d4;
int e1,e2,e3,e4;

printf("Digite os 4 valores do primeiro grupo:\n");
scanf("%d %d %d %d", &a1, &a2, &a3, &a4);
printf("Digite os 4 valores do segundo grupo:\n");
scanf("%d %d %d %d", &b1, &b2, &b3, &b4);
printf("Digite os 4 valores do terceiro grupo:\n");
scanf("%d %d %d %d", &c1, &c2, &c3, &c4);
printf("Digite os 4 valores do quarto grupo:\n");
scanf("%d %d %d %d", &d1, &d2, &d3, &d4);
printf("Digite os 4 valores do quinto grupo:\n");
scanf("%d %d %d %d", &e1, &e2, &e3, &e4);

printf("Primeiro grupo na ordem digitada:\n%d %d %d %d\n",a1,a2,a3,a4);
printf("Segundo grupo na ordem digitada:\n%d %d %d %d\n",b1,b2,b3,b4);
printf("Terceiro grupo na ordem digitada:\n%d %d %d %d\n",c1,c2,c3,c4);
printf("Quarto grupo na ordem digitada:\n%d %d %d %d\n",d1,d2,d3,d4);
printf("Quinto grupo na ordem digitada:\n%d %d %d %d\n",e1,e2,e3,e4);

int arr[] = {a1,a2,a3,a4,b1,b2,b3,b4,c1,c2,c3,c4,d1,d2,d3,d4,e1,e2,e3,e4};

int length = sizeof(arr)/sizeof(arr[0]);

int x = 0;
for(int i = 0; i < length; i++){
    for(int j = i+1; j < length; j++){
        if(arr[i] > arr[j]){
        x = arr[i];
        arr[i] = arr[j];
        arr[j] = x;
        }
    }
}

printf("Numeros digitados em ordem crescente: \n");    
for (int i = 0; i < length; i++) {     
    printf("%d ", arr[i]);    
}

int y = 0;
for(int i = 0; i < length; i++){
    for(int j = i+1; j < length; j++){
        if(arr[i] < arr[j]){
        x = arr[i];
        arr[i] = arr[j];
        arr[j] = x;
        }
    }
}

printf("\nNumeros digitados em ordem decrescente: \n");    
for (int i = 0; i < length; i++) {     
    printf("%d ", arr[i]);    
}

return 0;
}