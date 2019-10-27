#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float calcoloArea(float ba,float ha){
	float area;
	area=(ba*ha)/2;
	return area;
}


void Stampa(float area1){
	printf("L'area e' %f",area1);
}


int main(int argc, char *argv[]) {
	float b,h,a;
	printf("Metti b \n");
	scanf("%f",&b);
	printf("Metti h \n");
	scanf("%f",&h);
	a=calcoloArea(b,h);
    Stampa(a);
	return 0;
}
