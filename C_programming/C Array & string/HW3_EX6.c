/*
 ============================================================================
 Name        : HW3_EX6 C program to find frequency of characters in string 
 Author      : Abdelrahman Omar Sallam
 Description : Unit_2 C  string
 ============================================================================
 */
 
 #include <stdio.h> // including stdio header file 
 
 
 int main()
 {
	char arr[100] , desired ; 
	int n = 0 ;
	
	
	
	printf("Enter a string: ");
	 
	gets(arr);
	
	printf("Enter a character to find frequency: ");
	
	scanf("%c", &desired);
	
	for(int i = 0 ; i < arr[i]!='\0' ; ++i){
		
		
		if(arr[i] == desired){
			++n;
		}

	}
	printf("frequency of %c = %d ", desired , n);

	
	
	return 0 ;
 }
 
 
 