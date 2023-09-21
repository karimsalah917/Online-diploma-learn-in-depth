/*
 * ex6.c
 *
 *  Created on: Sep 20, 2023
 *      Author: karim
 */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int x,y,temp;
	//Printf("Enter the first integer a");
	printf("Enter integer a:");
	scanf("%d",&x);
	//Printf("Enter the second integer a");
	printf("Enter integer b:");
	scanf("%d",&y);
	temp=x;
	x=y;
	y=temp;
	printf("a=%d \n",x);
	printf("b=%d \n",y);
	return 0;


}
