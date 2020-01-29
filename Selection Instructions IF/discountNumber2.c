#include<stdio.h>

int main(){
	
	char bike[30], brand[30];
	float price = 0;
	float finalPrice = 0;
	float discount = 0;
	 
	
	printf("Please select the bike brand you want: ");
	gets(brand);
	printf("Thank you..\nYou have selected %s bike's brand", brand);
	printf("\nPlease select the price of your desired bike: ");
	scanf("%f", &price);
	printf("Thanks..\nThe bike discount will vary depending on your brand. ");
	fflush(stdin);
	
	if(strcmp(bike, "Susuki") == 0){
		discount = price * 0.1;
		finalPrice =  price - discount;
	}
	else if(strcmp(bike, "Yamaha") == 0){
		discount =  price * (8/100); //0.8;
		finalPrice = price - discount;
	}
	else if (strcmp(bike, "Honda")== 0){
		discount = price * 5/100; //0.5;
		finalPrice = price - discount;
	}
	else{
		discount =   price * 2/100; //0.2 ;
		finalPrice = price - discount;
	}
	
	printf("\nAs your motorbike selection was %s your discount is: %f\nYour final price is : %f", brand, discount, finalPrice);
	return 0;
	
}
