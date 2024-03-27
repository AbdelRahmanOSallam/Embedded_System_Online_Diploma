/*
 ============================================================================
 Name        : HW2_EX3 find largest number 
 Author      : Abdelrahman Omar Sallam
 Description : Unit_2 C Basics
 ============================================================================
 */

#include <stdio.h> // include std library

int main()
{

	float num1 , num2 ,num3 = 0 ;
	
	printf("Enter three numbers: \n");
	scanf("%f \n %f \n %f", &num1 , &num2 , &num3);
	
	if(num1 >= num2){
		
		if(num1>= num3){
			printf("largest number = %.2f" , num1);
		}
		else{
			printf("largest number = %0.f", num3);
		}
	}
	else if(num2 >= num1){
		
		if(num2 >=num3){
			
			printf("largest number = %.2f" , num2);
		}
		else{
			printf("largest number = %.2f" , num3);
		}
	}
	return 0 ;
}