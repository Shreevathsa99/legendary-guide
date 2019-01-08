/* Adds two numbers and returns sum*/
#include<stdio.h>

int sum(int, int); //function Prototype

int main(){
	// creating two variables and initializing.
	int a,b;
	int result;
	printf("Enter the two numbers: ");
	scanf("%d%d", &a, &b);
	
	//gets result from summ
	result = sum(a, b);
	printf("The sum is %d\n", result);
	return 0;
}//main
//function definition
int sum(int x, int y){
	int compute = x + y;
	return compute;
}//sum
