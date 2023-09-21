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
	int operation,x,y;
	printf("Enter operator either + or - or * or / :");
	scanf("%d",&operation);
	printf("Enter two operands\n");
	scanf("%d",&x);
	scanf("%d",&y);

	switch(operation)
	{
	case '+' :
	{
		printf("%d + %d =%d",x,y,x+y);
	}
	break;
	case '-' :
	{
		printf("%d - %d =%d",x,y,x-y);

	}
	break ;
	}
return 0;
}
