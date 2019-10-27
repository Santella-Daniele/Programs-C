#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap(int *a,int *b);

int main(int argc, char *argv[]) {
	int a=5;
	int b=6;
	int *indirizzodia =&a;
	printf("%p",&a);

    swap(&a,&b);

	return 0;
}

void swap(int *a,int *b){
	int t= *a;
	*a= *b;
	*b= t;
	printf(" A= %d e B= %d",*a,*b);

}
