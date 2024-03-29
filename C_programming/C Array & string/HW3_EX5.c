/*
 ============================================================================
 Name        : HW3_EX5 C program search an elemrnt in array 
 Author      : Abdelrahman Omar Sallam
 Description : Unit_2 C Array & string
 ============================================================================
 */
 
 #include <stdio.h> // including stdio header file 
 
 
 int main()
 {
	int num  , n , loc = 0;
	int arr[50];
	
	
	
	printf("Enter no of elements: ");
	 
	scanf("%d",&n);
		
	
	for(int i = 0 ; i < n ; ++i){
		
		
		scanf("%d", &arr[i]);

	}
	printf("\n");

	printf("Enter the element to be searched : ");
	
	scanf("%d", &num);
	
	
	
	for(int i = 0 ; i<n ; i++){
		
		if (arr[i] == num){
			loc = i+1;
			printf("number fount at location : %d",loc);
			break;
		}
		
	}
	
	
	
	return 0 ;
 }
 
 
 