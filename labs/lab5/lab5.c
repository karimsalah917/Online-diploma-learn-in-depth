/*
 * lab5.c
 *
 *  Created on: Sep 19, 2023
 *      Author: karim
 */
/* program info
 * program used to calcuate the average of student grades entered by the user
 * */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0); // used to buffer printf and scanf
				setvbuf(stderr, NULL, _IONBF, 0);
	int no;
	float sum=0;
	float temp=0;
	int i;
	printf("Enter no of students\n");

	scanf("%d",&no);



	for(i=1;i<=no;i++)
	{
	printf("Enter the degree of student no(%d):",i);
	scanf("%f",&temp);
	sum=sum+temp;
	}
	sum=sum/no;
	printf("the average number is:%f",sum);
	return 0;
}
