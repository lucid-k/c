#include<stdio.h>

void login(int correctPin);
int showMenu();
void checkBalance(int balance);
int deposit(int balance,int amount);
int withdraw(int balance, int amount);
int main(){
	int pin=0,account=0,depo,withdraws,prompt,pin2;
	char prom;
	while(1){
		printf("MAIN MENU\nDo you want to:\n1. login and transact\n2. Exit the program\n");
		scanf("%d",&prompt);
		if (prompt == 1){
		while(1){
		printf("are you a new user?\nEnter 'y' or 'n'\n");
		scanf(" %c",&prom);
		if (prom == 'y'|| prom =='Y'){
			printf("Please enter a pin:\n");
			scanf(" %d",&pin);
		}
		else if(prom == 'n'|| prom =='N'){
			if (pin > 0){
				printf("Enter pin again:\n");
				scanf("%d",&pin2);
				if(pin == pin2){
				login(pin);
				break;
				}
				else{
					printf("pins do not match\n");
				}
			}
			else{
				printf("Pin cannot be zero or negative\ntry again\n");
		}
		}
		else{
			printf("wrong input, try again\n");
		}
		}
	while(1){
	switch (showMenu()){
		case 1:
			checkBalance(account);
			break;
		case 2:
			printf("Enter the amount to deposit into your account:\n");
			scanf(" %d",&depo);
			if (depo > 0){
				account = deposit(account,depo);
				break;
			}
			else{
				printf("Enter amount greater than zero\n");
				break;
			}
		case 3:
			printf("Enter the amount to withdraw from your account:\n");
			scanf("%d",&withdraws);
			if (withdraws > account){
				printf("Your balance is too low to withdraw the amount\nyour balance is %d\n",account);
				break;
			}
			else{
				account = withdraw(account,withdraws); 
				break;
			}
		case 4:
			printf("Thank you come again\n");
			return 0;
		default:
			printf("wrong input\nTry again\n");
	}
	}
		}
		else if(prompt == 2){
			printf("sorry to see you leave\n");
			break;
		}
		else{
			printf("wrong choice, Try again\n");
		}
	}
return 0;
}
/* function to process login
 * correctPin: accepts pin
 */
void login(int correctPin){
	printf("Login successful!\n");
}
/* function handling menu options
 * has no parameters
 */
int showMenu(){
	int choice;
	printf("Select\n1. Check balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
	scanf("%d",&choice);
	return (choice);
}
/* function to check balance
 * balance: account status
 */
void checkBalance(int balance){
	printf("Your account balance is: %d\n",balance);
}
/* function to handle deposits
 * balance: account status
 * amount: deposited amount
 */
int deposit(int balance,int amount){
	balance = balance + amount;
	return(balance);
}
/* function to handle withdrawals
 * balance: account status
 * amount: withdrawn amount
 */
int withdraw(int balance, int amount){
	balance = balance - amount;
	return(balance);
}
