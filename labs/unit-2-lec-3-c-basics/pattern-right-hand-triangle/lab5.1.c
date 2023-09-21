/*
 * lab5.1.c
 *
 *  Created on: Sep 19, 2023
 *      Author: karim
 */
/* program info
 * program used to print this output
 *
 **
 ***
 ****
 *****
 ******
 *******
 ********
 *********
 **********
 * */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0); // used to buffer printf and scanf
	setvbuf(stderr, NULL, _IONBF, 0);
	int i,j,x;
	x=10; // value of the length of the base of the triangle
	for(i=1;i<=x;i++)//used for rows
	{

		{for(j=1;j<=i;j++)//used for columns
			printf("*");
		}
		printf("\n");}
	return 0;
}

