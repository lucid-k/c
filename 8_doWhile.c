#include<stdio.h>

int main(){
	int a,b;
	char prom,op;
	do{
		printf("Enter two numbers to perfom operations on\n");
		scanf("%d",&a);
		scanf("%d",&b);
		printf("Choose:\n+ for addition\n- for subtraction\n* for multiplication\n/ for division\n");
		scanf(" %c",&op);
		if(op == '+'){
			printf("Your result %d\n",(a+b));
		}
		else if(op == '-'){
			printf("Your result %d\n",(a-b));
		}
		else if(op == '*'){
			printf("Your result %d\n",(a*b));
		}
		else if(op == '/'){
			if(b>0){
				printf("Your result %d\n",(a/b));
			}
			else{
				printf("You cannot divide a number by zero\n");
			}
		}else{
			printf("Enter the correct operator choice\n");
		}
		printf("Do you wish to try again?\nType y to continue or any other letter to exit\n");
		scanf(" %c",&prom);
	}while(prom == 'y');
	return(0);
}
