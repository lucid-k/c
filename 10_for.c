#include<stdio.h>

int main(){
	while(1){
		int amtDue,amtPaid,change,i,j=0,k=0,l=0,m=0,count=0,coin=0;
		char promp;
		printf("CASHIER CHANGE DISPENSER\n");
		printf(":::::::::::::::::::::::::::::::::::::::::::::::::::\n");
		printf("Enter the amount due\n");
		scanf("%d",&amtDue);
		printf("Enter the amount paid\n");
		scanf("%d",&amtPaid);
		if(amtDue>amtPaid){
			printf("Add more funds\n");

			return(0);
		}
		printf("Change to return is: %d\n",amtPaid-amtDue);
		printf("Denominations:\n");
		change = amtPaid-amtDue;
		for(i=change;i>0;){
			if(i>=1000){
				j=i/1000;
				printf("%d x 1000\n",j);
				i=i%1000;
				count += j;
			}
			else if(i>=500 && i<1000){
				k=i/500;
				printf("%d x 500\n",k);
				i=i-500;
				count += k;
			}
			else if(i>=200 && i<500 ){
				l=i/200;
				printf("%d x 200\n",l);
				i=i%200;
				count += l;
			}
			else if(i<200 && i>=100){
				k=i/100;
				printf("%d x 100\n",k);
				i=i%100;
				count += k;
			}
			else if(i<100 && i>=50){
				l=i/50;
				printf("%d x 50\n",l);
				i=i-50;
				count += l;
			}
			else if(i<50 && i>=20){
				k=i/20;
				printf("%d x 20\n",k);
				i=i%20;
				coin += k;
			}
			else if(i<20 && i>=10){
				l=i/10;
				printf("%d x 10\n",l);
				i=i-10;
				coin += l;
			}
			else if(i<10 && i>=5){
				m=i/5;
				printf("%d x 5\n",m);
				i=i-5;
				coin += m;
			}
			else{
				printf("%d x 1\n",i);
				coin += i;
				i=i%1;
			}
		}
		printf("The total number of notes used is %d\n",count);
		printf("The total number of coins used is %d\n",coin);
		printf("Enter y to exit anything else to continue\n");
		scanf(" %c",&promp);
		if(promp == 'y'){
			return(0);
		}
		else{
			printf("__________________________________________________\n");
		}

	}
	return(0);
}
