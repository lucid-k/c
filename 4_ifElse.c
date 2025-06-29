#include<stdio.h>

int main(){
	int num;
	printf("Enter\n1 if you are a man:\n2 if you are a woman:\n");
	scanf("%d",&num);
	if (num == 1){
		printf("HELLO KING!\n");
		return 0;
	}
	else{
		if (num == 2){
			printf("HELLO QUEEN!\n");
			return 0;
		}
	}
	printf("Hello human\n");
	return 0;
}
