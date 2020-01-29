//Calculate the greater of two numbers read by keyboard

#include<stdio.h>
int main(){
	
	int n1, n2;
	
	printf("Type 2 numbers: "); scanf("%i %i", &n1, &n2);
	printf("The numbers typed are: %i and %i", n1, n2); 
	
	if(n1 > n2){
		printf("\nThe greater number is: %i", n1);
	}
	else{
		printf("\nThe greater number is: %i", n2);
	}
	return 0;
}
