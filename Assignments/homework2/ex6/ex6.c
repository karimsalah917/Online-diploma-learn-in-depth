/*
 * ex6.c
 *
 *  Created on: Sep 21, 2023
 *      Author: karim
 */
/* program info: this program is used to find sum of natural numbers */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int i,x,sum=0;
	printf("Enter an integer:");
	scanf("%d",&x);
	for(i=x;i>0;i--){
		sum+=i;

	}
	printf("Sum=%d",sum);
	return 0;
}

