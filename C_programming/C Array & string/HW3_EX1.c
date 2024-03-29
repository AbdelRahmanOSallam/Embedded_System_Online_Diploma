/*
 ============================================================================
 Name        : HW3_EX1 Sum of two matrix of order 2*2 
 Author      : Abdelrahman Omar Sallam
 Description : Unit_2 C Array & string
 ============================================================================
 */
 
 #include <stdio.h> // including stdio header file 
 
 
 int main()
 {
	float a[2][2]={{0,0},
				  {0 ,0}};
	float b[2][2]={{0,0},
				  {0 ,0}};
	float matSum[2][2]={{0,0},
				        {0,0}};			
						
	printf("Enter elements of 1st matrix: \n");
	 
	 
	for(int i = 0 ; i <2 ; i++){
		
		for ( int j = 0 ; j <2 ; j++ ){
			
			printf("Enter a%d%d: ", i+1 , j+1);
			scanf("%f" , &a[i][j]);
		}
	}
	
	printf("Enter elements of 2st matrix: \n");
	 
	 
	for(int i = 0 ; i <2 ; i++){
		
		for ( int j = 0 ; j <2 ; j++ ){
			
			printf("Enter a%d%d: ", i+1 , j+1);
			scanf("%f" , &b[i][j]);
		}
	}
	
	for(int i = 0 ; i <2 ; i++){
		
		for ( int j = 0 ; j <2 ; j++ ){
			
			matSum[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("sum of matrix: \n");
	
	for(int i = 0 ; i <2 ; i++){
		
		for ( int j = 0 ; j <2 ; j++ ){
			
			printf("%.1f      ",matSum[i][j]);
		}
		printf("\n");
	}
	
	return 0 ;
 }
 
 
 