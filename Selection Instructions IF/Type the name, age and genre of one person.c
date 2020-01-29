//Type the name, age and genre of one person, print only if the person is a male and an adult

#include<stdio.h>

int main(){
	
	int age;
	char name[30], genre[30];
	
	printf("Type your name: "); gets(name);
	printf("Type your age: "); scanf("%i", &age);
	printf("Type your genre: "); scanf(" %s", &genre);
	
		fflush(stdin);
	if(strcmp(genre, "male") == 0 && age >= 18){
		printf("Your name is: %s.", name);
	}
	else if(strcmp(genre, "male")== 0 && age < 18) {
			printf("You are a male but minor.");
	}
	else if(strcmp(genre, "female")== 0 && age >= 18){
			printf("You are a female and %i years old.", age);
	}
	//else if(strcmp(genre, "female")== 0 && age < 18){
	//	printf("You are a female and %i years old, meaning you are minor.", age);
	//}
	else{
		printf("You are a female and minor");
	}
		return 0;
		
}
	
	
	
	
	


