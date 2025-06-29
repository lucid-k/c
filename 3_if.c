#include<stdio.h>

int main(){
	int num;
	printf("Enter 1 if you are a man:\n");
	scanf("%d",&num);
	if (num == 1){
		printf("HELLO KING! \n");
		return 0;
	}
	printf("Hello human\n");
	return 0;
}
