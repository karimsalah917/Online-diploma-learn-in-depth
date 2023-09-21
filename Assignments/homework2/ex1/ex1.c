/*
 * ex1.c
 *
 *  Created on: Sep 21, 2023
 *      Author: karim
 */
/*  program info
 * this program used to check whether the inputed number is odd or even
 * */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int x;
	printf("Enter an integer you want to check:");
	scanf("%d",&x);
	if(x%2){
		printf("%d is odd",x);
	}else{
		printf("%d is even",x);
	}
	return 0;
}

