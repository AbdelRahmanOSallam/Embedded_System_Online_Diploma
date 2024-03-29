/*
 ============================================================================
 Name        : HW2_EX1 check number is even or odd 
 Author      : Abdelrahman Omar Sallam
 Description : Unit_2 C Basics
 ============================================================================
 */

#include <stdio.h> // include std library

int main()
{
	int num = 0;
	
	printf("enter an integer you want to check: ");
	fflush(stdout); fflush(stdin);
	
	scanf("%d" , &num);
	
	if( num%2 == 0){
		
		printf("%d is even." , num);
		
	}
	else if(num%2 != 0){
		
		printf("%d is odd." , num);
	}
	else{
		
		printf("it's not an integer number");
	}
	 return 0 ;
	
}