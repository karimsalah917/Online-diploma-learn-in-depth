/*
 * ex3.c
 *
 *  Created on: Sep 20, 2023
 *      Author: karim
 */
#include<stdio.h>
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
int x,y,sum;
printf("enter two integers\n");
scanf("%d",&x);
scanf("%d",&y);
sum=x+y;
printf("sum=%d",sum);
return 0;
}

