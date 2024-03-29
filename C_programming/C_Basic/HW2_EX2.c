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

	char c;
	
	printf("Enter an alphabet: ");
	
	scanf("%c" , &c);
	
	(c=='a'  || c =='A' || c =='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U')?printf("%c is a vowel.", c): printf("%c is a consonant" , c);
	
	return 0 ;
}