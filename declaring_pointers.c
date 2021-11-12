#include <stdio.h>

int main(){
	int age = 12;
	
	//Declare a pointer 
	int *p;
	
	//Make the pointer to point to the address of variable age
	p = &age;
	
	printf("The value of the pointer is %p", p);
	printf("\n");
	
	return 0;
}
