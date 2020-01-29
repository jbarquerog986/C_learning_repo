//Determine if a number is even or odd


#include<stdio.h>

int main(){
	
	int num, result;
	
	printf("Please enter a single number: ");
	 scanf("%i", &num);
	
	if (num % 2 == 0){
		printf("\nThe number %i is EVEN", num);
	}
	else{
		result = num % 2;
		printf("\nThe number %i is ODD and the result is: %i ", num, result);
	}
	
}
