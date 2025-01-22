#include<stdio.h>

void greetUser(char name[]){
	printf("\n\nHello, %s! Welcome to Dreamizer's Programming Class!", name);
}

void thankUser(){
	printf("\nThank you for practicing coding today!");
}

int main(){
	char name[15];
	printf("Enter your name: ");
	scanf("%s", &name);
	greetUser(name);
	thankUser();
	
	return 0;
}