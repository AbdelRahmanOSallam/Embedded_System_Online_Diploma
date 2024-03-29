/*
 ============================================================================
 Name        : HW2_EX7 find factorial of number 
 Author      : Abdelrahman Omar Sallam
 Description : Unit_2 C Basics
 ============================================================================
 */

#include <stdio.h> // include std library

int factorial(int num);
int main()
{
	
	
	int num , count ;
	unsigned long long int factorial = 1; // factorial always postive & it might be big number
	count = 1;
	
	
	printf("enter an integer: ");
	
	scanf("%d" , &num);
	
	if(num <0){
		printf("Error!!! Factorial of negative number doesn't exist.");
	}
	else if (num>0){
		
		for(count ; count<=num ; ++count ){
			
			factorial*=count;
		}
		printf("factorial = %d" , factorial);

	}
	else{
		printf("Factorial of 0 = 1");
	}
	
	
	return 0;
	
	
}

