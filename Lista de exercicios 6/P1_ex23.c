#include <stdio.h>
#include <math.h>

int Check(int x, int y, int z){
    if(x <= (y+z) && y <= (z+x) && z <= (y+x)){
        return 1;
    }else{
        return 0;
    }
}
int triangleType(int x, int y, int z){
    double biggestSide, leftover;
    if(x > y && x > z){
        biggestSide = pow(x, 2);
        leftover = pow(z,2) + pow(y, 2);
    }else if(y > x && y > z){
        biggestSide = pow(y, 2);
        leftover = pow(z,2) + pow(x, 2);
    }else{
        biggestSide = pow(z, 2);
        leftover = pow(x,2) + pow(y, 2);
    }
    
    if(biggestSide == leftover){
        return 1;
    }
    else if(biggestSide > leftover){
        return 0; 
    }
    else if(biggestSide < leftover){
        return -1;
    }
}

int main(){

    int a, b, c, test1, test2;
    
    printf("Enter three sides of a triangle:\n");
    scanf("%d %d %d", &a, &b, &c);

    test1 = Check(a,b,c);

    if(test1 == 0){
        printf("The numbers entered do not form a triangle.\n");
        goto END;
    }else if(test1 == 1){
        test2 = triangleType(a,b,c);
        if(test2 == 1){
            printf("The triangle formed is right.\n");
        }else if(test2 == 0){
            printf("The triangle formed is obtuse.\n");
        }else if(test2 == -1){
            printf("The triangle formed is acute.\n");
        }
    }

END:
return 0;
}