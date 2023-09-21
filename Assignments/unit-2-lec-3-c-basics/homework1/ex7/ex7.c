/*
 * ex7.c
 *
 *  Created on: Sep 20, 2023
 *      Author: karim
 */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int x,y;
	//Printf("Enter the first integer a");
	printf("Enter integer a:");
	scanf("%d",&x);
	//Printf("Enter the second integer a");
	printf("Enter integer b:");
	scanf("%d",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("a=%d \n",x);
	printf("b=%d \n",y);
	return 0;


}

