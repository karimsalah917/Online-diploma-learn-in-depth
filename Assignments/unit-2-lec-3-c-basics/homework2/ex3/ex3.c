/*
 * ex3.c
 *
 *  Created on: Sep 21, 2023
 *      Author: karim
 */
/*  program info
 * this program used to find the largest number among three numbers
 * */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float x,y,z;
	printf("Enter three numbers:");
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);
	if(x>y){
		if(x>z){
			printf("Largest number=%f",x);
		}
		else{
			printf("Largest number=%f",z);
		}
	}else{
		if(y>z){
					printf("Largest number=%f",y);
				}
				else{
					printf("Largest number=%f",z);
				}
	}
	return 0;
}


