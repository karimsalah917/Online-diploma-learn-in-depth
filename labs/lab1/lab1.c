/*
 * lab1.c
 *
 *  Created on: Sep 18, 2023
 *      Author: karim
 */
/* program info
 * program used to calculate area and circ of circle
 * */
#include <stdio.h>
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0); // used to buffer printf and scanf
	setvbuf(stderr, NULL, _IONBF, 0);

	float radius; // variable of the radius
	float area; // variable of the area
	float circ; // variable of the circ
	char choice;
	printf("Enter the radius of the circle \n");

	scanf("%f",&radius); // taking radius from the user
	printf ("choose what to calculate\n1)area \n2)circ\n");
	scanf("%d",&choice); // taking choice from the user
	if(choice==1){
		area= radius * radius *3.14 ;
		printf("Area=%f",area);
	}
	else if(choice==2){
		circ= 2*3.14*radius ;
		printf("circ=%f\n",circ);
	}
	else{
		printf("enter a valid choice");
	}
}

