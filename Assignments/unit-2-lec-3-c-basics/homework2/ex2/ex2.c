/*
 * ex2.c
 *
 *  Created on: Sep 21, 2023
 *      Author: karim
 */
/*  program info
 * this program used to check whether the inputed letter is vowel or not
 * */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char x;
	printf("Enter a letter you want to check:");
	scanf("%c",&x);
	if((x=='o')||(x=='O')||(x=='i')||(x=='I')||(x=='e')||(x=='E')||(x=='a')||(x=='A')||(x=='u')||(x=='U')){
		printf("%c is vowel",x);
	}else{
		printf("%c is consonant",x);
	}
	return 0;
}


