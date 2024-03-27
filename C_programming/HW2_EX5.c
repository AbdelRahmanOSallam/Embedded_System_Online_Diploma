/*
 ============================================================================
 Name        : HW2_EX5 check whether a character is an alphabet or not 
 Author      : Abdelrahman Omar Sallam
 Description : Unit_2 C Basics
 ============================================================================
 */

#include <stdio.h> // include std library

int main()
{
	
	char c;
	
	printf("Enter a character: ");
	
	scanf("%c" , &c);
	
	((c>= 'a' && c <= 'z') || (c>= 'A' && c<= 'Z'))? printf("%c is an alphabet.",c) : printf("%c is not an alphabrt.",c);
	return 0 ;
}