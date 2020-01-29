//Test if a number typed by the user is positive or negative

#include<stdio.h>

int main(){
	
	float num;
	
	printf("Type a number: "); scanf("%f",&num);
	
	if (num > 0){
		printf("The number %2.f is positive", num);
	} else {
		printf("The number %2.f is negative", num);
	}
	
	
	return 0;
}
