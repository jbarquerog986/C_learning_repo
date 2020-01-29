//Motorbike seller has end year discount as follows:
//Susuki bikes have a discount of 10%
//Yamaha bikes have a discount of 8%.
//Honda bikes have a discount of 5%.
//Other brands have a discount of 2%%
//Build a program that tells the customer its final price depending on the brand purchased.

#include<stdio.h>
//#define DISCOUNT10 10/100
//#define DISCOUNT8 8/100
//#define DISCOUNT5 5/100
//#define DISCOUNT2 2/100

int main(){
	
	char bike[30], brand[30];
	int price = 0;
	int finalPrice = 0;
	int discount = 0;
	 
	
	printf("Please select the bike brand you want: ");
	gets(brand);
	printf("Thank you..\nYou have selected %s bike's brand", brand);
	printf("\nPlease select the price of your desired bike: ");
	scanf("%i", &price);
	printf("Thanks..\nThe bike discount will vary depending on your brand. ");
	fflush(stdin);
	
	if(strcmp(bike, "Susuki") == 0){
		discount = price * (10/100);
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
	
	printf("\nAs your motorbike selection was %s your discount is: %i\nYour final price is : %i", brand, discount, finalPrice);
	return 0;
	
}
