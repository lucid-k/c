#include<stdio.h>

int main(){
	int num;
	float dec;
	char fIni,sIni;
	printf("Enter a number:\n");
	scanf("%d",&num);
	printf("Enter a decimal:\n");
	scanf("%g",&dec);
	printf("Enter your initials\n");
	scanf(" %c %c",&fIni,&sIni);
	printf("Dear %c.%c\nyour number multiplied by 3 is: %d and the decimal is: %g\n",fIni,sIni,num*3,dec);
	return (0);
}
