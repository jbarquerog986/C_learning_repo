//Check if an student is approved of dissaproved a test

#include<stdio.h>

int main(){
	
	float test;
	printf("Type your test grade: "); scanf("%f", &test);
	if (test > 10.5){
		printf("\nYou passed the test with grade: %2.f", test);
		//You can also set to print as "puts" but only in conditionals but only plain test
	}
	else{
		printf("\nYou failed the test with the grade: %2.f ", test);
	}
	
	
	
	return 0;
}
