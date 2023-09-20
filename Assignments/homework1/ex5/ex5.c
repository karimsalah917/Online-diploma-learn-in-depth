/*
 * ex5.c
 *
 *  Created on: Sep 20, 2023
 *      Author: karim
 */

#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char x;
	printf("Enter a character:");
	scanf("%c",&x);
	printf("Asci value is :%d",x);
	return 0;
}
