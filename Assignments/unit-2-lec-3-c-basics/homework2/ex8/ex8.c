/*
 * ex8.c
 *
 *  Created on: Sep 21, 2023
 *      Author: karim
 */

/* program info
 * this program is used as a calculator
 */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float x,y;
	char operation;
	printf("Enter operator either + or - or * or / :");
	scanf("%c",&operation);
	printf("Enter two operands\n");
	scanf("%f",&x);
	scanf("%f",&y);

	switch(operation)
	{
	case '+' :
	{
		printf("%f + %f =%f",x,y,x+y);
	}
	break;
	case '-' :
	{
		printf("%f - %f =%f",x,y,x-y);
	}
	break ;
	case '*' :
		{
			printf("%f * %f =%f",x,y,x*y);
		}
		break ;
	case '/' :
		{
			printf("%f / %f =%f",x,y,x/y);
		}
		break ;
	default :
		printf("Enter a valid operand !!");
	}

return 0;
}
