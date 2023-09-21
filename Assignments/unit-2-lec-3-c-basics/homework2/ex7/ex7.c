/*
 * ex7.c
 *
 *  Created on: Sep 21, 2023
 *      Author: karim
 */
/* program info: this program is used to find sum of natural numbers */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int i,x,factorial=1;
	printf("Enter an integer:");
	scanf("%d",&x);
	if(x<0){
		printf("Error!!! Factorial of negative numbers doesn't exist!");
	}else{
	for(i=x;i>0;i--){
		factorial*=i;

	}
	printf("factorial=%d",factorial);}
	return 0;
}


