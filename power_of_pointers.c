#include <stdio.h>
//Pass by value
void change0(int num){
	//Try to change the value of num to be plus 10
	num = num +10;
	}
//Pass using pointers
void change1(int *num){
	*num = *num +10;
}
int main(){
	int age0 = 10;
	int age1 = 12;
	//Pass primitive value into a function change0 does not change the value of age
	change0(age0);
	printf("The value of age0 is %d", age0);
	printf("\n");
	printf("\n");
	
	//Passing using into a function change1 does change the value of age
	change1(&age1);
	printf("The value of age1 is %d", age1);
	printf("\n");
	printf("\n");

	return 0;

}
