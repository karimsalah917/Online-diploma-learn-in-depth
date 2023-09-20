/*
 * ex4.c
 *
 *  Created on: Sep 20, 2023
 *      Author: karim
 */

#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float x,y,product;
	printf("Enter two numbers:");
	scanf("%f",&x);
	scanf("%f",&y);
	product=x*y;
	printf("Produce = %F",product);
	return 0;
}
