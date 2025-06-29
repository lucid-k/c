#include<stdio.h>

int main(){
	int num;
	printf("Enter\n1 if you are a man\n2 if you are a woman\nanything else if you are human\n");
	scanf("%d",&num);
	if (num == 1){
		printf("HELLO KING!\n");
	}
	else if (num == 2){
		printf("HELLO QUEEN!\n");
	}
	else{
		printf("I COME IN PEACE HUMAN!\n");
	}
	return 0;
}
