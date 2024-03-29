/*
 ============================================================================
 Name        : HW3_EX4 C program to insert an element in array 
 Author      : Abdelrahman Omar Sallam
 Description : Unit_2 C Array & string
 ============================================================================
 */
 
 #include <stdio.h> // including stdio header file 
 
 
 int main()
 {
	int num  , n , loc = 0;
	int arr[100];
	
	
	
	printf("Enter no of elements:");
	 
	scanf("%d",&n);
		
	
	for(int i = 0 ; i < n ; ++i){
		
		
		scanf("%d", &arr[i]);

	}
	printf("\n");

	printf("Enter the element to be inserted : ");
	
	scanf("%d", &num);
	
	printf("Enter the location : ");
	
	scanf("%d" , &loc);
	
	for(int i = n; i >= loc ; i--){
		
		arr[i] = arr[i-1];
	}
	n++;
	arr[loc-1] = num;
	
	
	
	for(int i = 0 ; i < n ; ++i){
		
		printf("%d  " , arr[i]);
	}
	
	
	
	return 0 ;
 }
 
 
 