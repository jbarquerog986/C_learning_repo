//IF as a condition
//Divisibility test

#include<stdio.h>

int main(){
	int n1, n2;
	printf("Type 2 numbers: "); scanf("%i %i", &n1, &n2);
	
	if (n1 % n2 == 0){
		printf("\nThe number %i is divisible by %i", n1, n2);
	}
	else{
		printf("\nThe number %i cannot be divided between %i", n1, n2);
	}
	
	
	return 0;

}
	
	

