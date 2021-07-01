#include <math.h>
#include <stdio.h>

//Eu não sei separar a entrada por vírgulas.

int main(){

	int x1,x2,y1,y2;
	float d;

	LOOP:
    printf("Enter the first x and y coordinate, or 0 for all coordinates to end the program:\n");
	scanf("%d",&x1);
	scanf("%d",&y1);
    printf("Enter the second x and y coordinate:\n");
	scanf("%d",&x2);
	scanf("%d",&y2);

	while(x1 != 0 || x2 != 0 || y1 != 0 || y2 != 0){
		d = (float)sqrt(pow((x2-x1),2) + pow((y2-y1),2));

		printf("The distance between (%d,%d) and (%d,%d) = %.2f\n",x1,y1,x2,y2,d);
		goto LOOP;
	}

		return 0;
}