#include<stdio.h>
#include<stdlib.h>

#include "functions.h"
/*
This is the main method
It's the entry point of our program
*/
int main(int argc, char* argv[]){
	int argv1, argv2,Results;
	char operator;
	printf("Calculator\n\n");
	printf("Enter an operator(+,-,*,/):");
	scanf("%c",&operator);
	printf("Enter two operands:");
	scanf("%d %d",&argv1,&argv2);
	if(argc>1){
		if(argc>=3){
		argv1 = atoi(argv[1]);
		argv2 = atoi(argv[2]);
		operator=(*argv[4]);
		
	//switch checks the operator to be used
	switch(operator){
		case '+':
		printf("%d +%d=%d\n",argv1,argv2,argv1+argv2);
		break;
		case '*':
		printf("%d *%d=%d\n",argv1,argv2,argv1*argv2);
		break;
		case '-':
		printf("%d -%d=%d\n",argv1,argv2,argv1-argv2);
		break;
		case '/':
		printf("%d /%d=%d\n",argv1,argv2,argv1/argv2);
		break;
		//if operator doesn't match any case constant(+,-,/,*,)
		default:
		printf("Error!operator is not correct");
		}
	}
	}
	return 0;
}










