//Enter a name and zodiac sign and print the number only if that person is aries

#include<stdio.h>

int main(){
	int age;
	char name[30], sign[20];
	printf("Type your name: ");
	gets(name);
	printf("Type your zodiac sign");
	gets(sign);
	
	if(strcmp(sign, "aries") == 0 ){
		printf("\nYour zodiac sign is Aries, your name is: %s", name);
	}
	else{
		printf("Your zodiac sign IS NOT aries ");
	}
	
}
