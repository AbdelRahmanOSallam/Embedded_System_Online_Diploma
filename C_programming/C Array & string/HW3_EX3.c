/*
 ============================================================================
 Name        : HW3_EX3 find transpose of matrix 
 Author      : Abdelrahman Omar Sallam
 Description : Unit_2 C Array & string
 ============================================================================
 */
 
 #include <stdio.h> // including stdio header file 
 
 
 int main()
 {
	int row , col  = 0 ; 
	
	int arr[100][100];
	int trans[100][100];
	
	
	
	printf("Enter Rows and column of matrix:");
	 
	scanf("%d%d", &row , &col);
	
	printf("Enter elements of matrix:\n");
	
	
	for(int i = 0 ; i < row ; ++i){
		
		for( int j = 0 ; j < col ; ++j){
		
			printf("Enter element a%d%d: " , i+1 , j+1);
			scanf("%d", &arr[i][j]);

		}
		printf("\n");
	}
	
	printf("Enters Matrix: \n");
	
	for(int i = 0 ; i < row ; ++i){
		
		for( int j = 0 ; j < col ; ++j){
		
			printf("%d  " ,arr[i][j]);

		}
		printf("\n");
	}
	
	for(int i = 0 ; i < col ; ++i){
		
		for( int j = 0 ; j < row ; ++j){
		
			trans[i][j] = arr[j][i];

		}
	}
	
	printf("Transposed of matrix:\n");
	
	for(int i = 0 ; i < col ; ++i){
		
		for( int j = 0 ; j < row ; ++j){
		
			printf("%d  " ,trans[i][j]);

		}
		printf("\n");
	}
		 
	 
	
	return 0 ;
 }
 
 
 