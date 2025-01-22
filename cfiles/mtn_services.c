#include<stdio.h>

int main(){
	int input;
	float amount;
	char recp[20];
	printf("Welcome to MTN services");
	printf("Choose an option:\n\n");
	printf("1. Airtime Recharge\n2. Internet Bundle\n3. Mobile Money Transfer\n4. Check Balance\n\n");
	printf("Input:");
	scanf("%d", &input);
	
	switch(input){
		case 1:
			printf("\nEnter amount: ");
			scanf("%f", &amount);
			printf("\nRecharge successful! You've added %.2f to your phone", amount);
			break;
		case 2:
			printf("\nEnter amount: ");
			scanf("%f", &amount);
			if(amount>=500){
				printf("\nData validity: You are now able to buy the internet bundles");
			}else{
				printf("\n\nData invalidity: insufficient amount to buy the internet bundles");
			}
			break;
		case 3:
			printf("\nEnter recipient's name': ");
			scanf("%s", &recp);
			printf("\nEnter amount: ");
			scanf("%f", &amount);
			printf("\nTransfer successfuly! You've sent %.2f to %s", amount, recp);
			break;
			
		case 4:
			printf("\nYour current balance is 5000Frw");
			break;
		default:
			printf("\nInvalid user input, Exit!");
	}			
	return 0;
}