#include<stdio.h>

int main(){
	int num;
	float dec;
	printf("Enter a number:\n");
	scanf("%d",&num);
	printf("Enter a decimal:\n");
	scanf("%g",&dec);
	printf("Your number multiplied by 3 is: %d and the decimal is: %g",num*3,dec);
	return (0);
}
