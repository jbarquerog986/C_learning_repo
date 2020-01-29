//Make a program that deletes the screen when 1 is typed

#include<stdio.h>
#include<stdlib.h>

int main(){
	char key;
	printf("Deleting screen program");
	printf("\n-------------------------------------\n");
	printf("\n-------------------------------------\n");
	printf("\nType the number 1: ");
	scanf("%c", &key);
	
	if(key == '1'){
		system("cls");
		printf("The clearing screen has worked");
	}
	else {
		fflush(stdin);
		printf("\nThe clearing screen did not work");
		printf("\nPlease, type number 1: ");
		scanf("%c", &key);
		if(key =='1'){
			system("cls");
		}
		else{
			printf("It just did not work");
		}
	}
	
	
	
	return 0;
}
