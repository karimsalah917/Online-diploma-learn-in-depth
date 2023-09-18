/*
 * lab2.c
 *
 *  Created on: Sep 18, 2023
 *      Author: karim
 */
/* program info
 * program used to compare between three numbers
 * */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0); // used to buffer printf and scanf
	setvbuf(stderr, NULL, _IONBF, 0);
	int num1=0,num2=0,num3=0; // variables for the three numbers to be compared
	printf("Enter three numbers\n");
    scanf("%d",&num1); //taking numbers from the user
    scanf("%d",&num2); //taking numbers from the user
    scanf("%d",&num3); //taking numbers from the user
    if(num1>num2){
    	if(num1>num3){
    		printf("the largest number is:%d\n",num1);
    	}
    	else{
    		printf("the largest number is:%d\n",num3);
    	}
    }else{
    	if(num2>num3)
    		printf("the largest number is:%d\n",num2);

    	else

    		printf("the largest number is:%d\n",num3);

    }
    return 0;
}
