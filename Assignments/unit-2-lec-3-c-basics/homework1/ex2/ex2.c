/*
 * ex2.c
 *
 *  Created on: Sep 20, 2023
 *      Author: karim
 */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int x;
printf("Enter an integer:");
scanf("%d",&x);
printf("you entered :%d",x);
return 0;
}

