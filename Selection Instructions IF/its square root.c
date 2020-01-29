//Enter a number and get its square root. If number negative print "it has an imaginary root"

#include<stdio.h>
#include<math.h>
int main(){
	int  num, root;
	printf("Type the number that you want to know the square root of: "); scanf("%i", &num);
	root = sqrt(num);
	
	if (root < 0){
		printf("\nNumber %i has an imaginary root", num);
	}
	else{
		printf("The square root of %i is: %i\n ", num, root);
	}
		
	return;
}
