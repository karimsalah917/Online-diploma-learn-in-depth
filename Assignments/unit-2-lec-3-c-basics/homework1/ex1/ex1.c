/*
 * ex1.c
 *
 *  Created on: Sep 20, 2023
 *      Author: karim
 */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
printf("C programming");
return 0;
}

