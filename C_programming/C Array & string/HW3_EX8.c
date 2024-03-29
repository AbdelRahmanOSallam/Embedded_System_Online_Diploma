/*
 ============================================================================
 Name        : HW3_EX7 C program to find length of string 
 Author      : Abdelrahman Omar Sallam
 Description : Unit_2 C  string
 ============================================================================
 */
 
 #include <stdio.h> // including stdio header file 
 #include <string.h> // including string library
 
 int main()
 {
	char arr[100] , temp  ; 
	int i , length = 0 ;
	
	
	printf("Enter a string: ");
	 
	gets(arr);
	
	length = strlen(arr)-1 ; 
	
	while( i < length){
		
		temp = arr[i];
		arr[i] = arr[length];
		arr[length]= temp;
		length--;
		i++;
		
	}
	
	printf("Reverse string is : %s ", arr);

	
	
	return 0 ;
 }
 
 
 