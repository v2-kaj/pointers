#include <stdio.h>

int main(){
	double height = 1.4;
	//Declare a pointer to point to variable height
	double *p; 
	p = &height;

	//Access the value at pointer p
	printf("The value of height is %lf", *p);
	printf("\n");

	return 0;
}
