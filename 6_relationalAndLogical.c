#include<stdio.h>

int main(){
	int age,cit;
	printf("Enter your age:\n");
	scanf("%d",&age);
	printf("Enter 1 if you are a citizen,0 if you are not\n");
	scanf("%d",&cit);
	if (age < 1){
		printf("Please enter a correct age\n");
	}
	else if ((cit != 1 && cit != 0)){
		printf("Choose the right citizen option\n");
	}
	else{
		if((age <18)||(!cit)){
			printf("You are not legible to vote due to age or citizenship\n");
		}
		if((age >= 18)&&(cit == 1)){
			printf("You are eligible tovote\n");
		}
		else if((age < 18)&&(cit == 1)){
			printf("You have %d years to vote\n",(18-age));
		}
		else{
			printf("Look for citizenship\n");
		}
	}
	
	return(0);
}
