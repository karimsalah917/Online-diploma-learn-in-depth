/*
 * lab4.c
 *
 *  Created on: Sep 19, 2023
 *      Author: karim
 */
/* program info
 * program used to calcuate the sum of numbers from 1 to 99
 * */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0); // used to buffer printf and scanf
			setvbuf(stderr, NULL, _IONBF, 0);
	int i;
	int b=0;
	for(i=0;i<100;i++){

		b+=i;
	}
	printf("sum of th numbers is:%d",b);
	return 0;
}

