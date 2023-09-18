/*
 * lab3.c
 *
 *  Created on: Sep 19, 2023
 *      Author: karim
 */
/* program info
 * program used to calcuate the minimum of two numbers
 * */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0); // used to buffer printf and scanf
		setvbuf(stderr, NULL, _IONBF, 0);
	int num1,num2;
	printf("enter two numbers\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	if(num1>num2){
		printf("the minimum is:%d",num2);
	}
	else{
		printf("the minimum is:%d",num1);
	}
	return 0;
}

