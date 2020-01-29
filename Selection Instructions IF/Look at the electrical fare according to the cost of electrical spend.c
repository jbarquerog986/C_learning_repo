//Look at the electrical fare according to the cost of electrical spend.
//For less than 1.000kwxh the fare  is 1200 between 1.000 & 1.850Kwxh es 1000 and greater than 1.850Kwxh is 900

#include<stdio.h>
#define FARE1 1200
#define FARE2 1000
#define FARE3 900

int main(){
	
	float kiloWats, fare;
	
	printf("\nPlease type the amoung of Kwxh you think you might've consumed: "); scanf("%f", &kiloWats);
	
	if (kiloWats < 1000){
		fare = FARE1;
	}
	if (kiloWats >= 1000 && kiloWats < 1850){
		fare = FARE2;
	}
	if(kiloWats > 1850){
		fare = FARE3;
	}
	printf("\nYou consumed an amount of %2.f Kwxhs and the total pay is: %2.f ", kiloWats, fare);
	
	
	
	return 0;
}
