/*
 ============================================================================
 Name        : HW2_EX6 calculate sum of natural numbers 
 Author      : Abdelrahman Omar Sallam
 Description : Unit_2 C Basics
 ============================================================================
 */

#include <stdio.h> // include std library

int main()
{
	
	int num ,  sum = 0;
	int count = 1;
	printf("enter an enteger: ");
	
	scanf("%d" , &num);
	
	
	while(num>=count){
		
		sum+=count;
		++count;
	}
	printf("sum = %d",sum);
	
	return 0;
	
	
}