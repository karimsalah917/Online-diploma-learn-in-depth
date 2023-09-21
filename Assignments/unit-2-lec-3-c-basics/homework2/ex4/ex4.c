/*
 * ex4.c
 *
 *  Created on: Sep 22, 2023
 *      Author: karim
 */
/* program info
 * this program is used to find whether the inputed integer is negative or not
 */
#include<stdio.h>
int main (){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int x;
	printf("Enter an integer:");
	scanf("%d",&x);
	if(x>0){
		printf("this integer is positive");

	}else
		printf("this number is negative");
	return 0;
}
