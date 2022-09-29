/*
 * ex6.c
 *
 *  Created on: Sep 26, 2022
 *      Author: 20101
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a , b , t ;
	printf("enter value of a : ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d"  , &a);
	t = a;
	printf("enter value of b ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d" , &b);
	a=b;
	b=t;
	printf("after swapping value of a %d\r\n" , a);
	printf("after swapping value of b %d\r\n" , b);


	return 0;
}

