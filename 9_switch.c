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
		switch(op){
			case '+':
				printf("Your result %d\n",a+b);
				break;
			case '-':
                        	printf("Your result %d\n",(a-b));
				break;
			case '*':
				printf("Your result %d\n",(a*b));
				break;
			case '/':
				if(b>0){
					printf("Your result %d\n",(a/b));
					}
				else{
                                	printf("You cannot divide a number by zero\n");
				}
			default:
                        	printf("Enter the correct operator choice\n");
		}
                printf("Do you wish to try exit?\nType y to exit or any other letter to continue\n");
                scanf(" %c",&prom);
                if(prom == 'y'){
                        break;
                }
        }while(1);
        return(0);
}
