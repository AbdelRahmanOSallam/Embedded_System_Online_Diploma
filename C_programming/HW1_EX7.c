/*
 ============================================================================
 Name        : HW1_EX7 swap numbers without temp variable 
 Author      : Abdelrahman Omar Sallam
 Description : Unit_2 C Basics
 ============================================================================
 */

#include <stdio.h>

void main()
{
	int x , y = 0 ;
	
	printf("enter the two integer numbers you want to swap\n");
	fflush(stdout);
	scanf("%d \n %d" , &x , &y);
	fflush(stdin);
	
	x+=y;
	y = x - y;
	x-=y;
	
	printf("the numbers after swapping are \n %d \n %d" , x ,y );
	
}