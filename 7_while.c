#include<stdio.h>

int main(){
	int password=12345,inp=0;
	printf("Enter the correct password to log in\n");
	scanf("%d",&inp);
	while(password != inp){
		printf("Incorrect password try again\n");
        	scanf("%d",&inp);

	}
	printf("Access granted\n");
	return(0);
}
