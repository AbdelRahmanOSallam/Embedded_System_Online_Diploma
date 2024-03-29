/*
 ============================================================================
 Name        : HW3_EX7 C program to find length of string 
 Author      : Abdelrahman Omar Sallam
 Description : Unit_2 C  string
 ============================================================================
 */
 
 #include <stdio.h> // including stdio header file 
 
 
 int main()
 {
	char arr[100]  ; 
	int length = 0 ;
	
	
	printf("Enter a string: ");
	 
	gets(arr);
	
	
	for(length ;  arr[i]!='\0' ; ++length);
	
	printf("length of string: %d ", length);

	
	
	return 0 ;
 }
 
 
 