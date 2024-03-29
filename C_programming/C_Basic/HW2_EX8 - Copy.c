/*
 ============================================================================
 Name        : HW2_EX2 check number is even or odd 
 Author      : Abdelrahman Omar Sallam
 Description : Unit_2 C Basics
 ============================================================================
 */

#include <stdio.h> // include std library

int main()
{
	
	char operator ;
	float num1 , num2 , r  = 0;
	
	printf("Enter operator either + or - or * or divide : ");
	
	scanf("%c" , &operator);
	
	printf("Enter two numbers: \n");
	
	scanf("%f%f", &num1 , &num2);
	//fflush(stdout) ; fflush(stdin);
	switch(operator){
		
		case '+':
			printf("%.1f + %.1f = %.1f" , num1 , num2 , num1+num2);
			break;
		
		case '-':
			printf("%.1f - %.1f = %.1f" , num1 , num2 , num1-num2);
			break;
		
		case '*': 
			printf("%.1f * %.1f = %.1f" , num1 , num2 , num1*num2);
			break;
		
		case '/': 
			printf("%.1f / %.1f = %.1f" , num1 , num2 , num1/num2);
			break;
			
		default:
			printf("please enter a valid operator\n");
			break;
	}
	return 0 ;
}

