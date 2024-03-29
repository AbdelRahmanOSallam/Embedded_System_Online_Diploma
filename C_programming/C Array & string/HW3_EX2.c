/*
 ============================================================================
 Name        : HW3_EX2 calculate average using arrays 
 Author      : Abdelrahman Omar Sallam
 Description : Unit_2 C Array & string
 ============================================================================
 */
 
 #include <stdio.h> // including stdio header file 
 
 
 int main()
 {
	int num  = 0 ; 
	float arr[100];
	float sum , avg = 0.0;
	
	
	printf("Enter the number of data: ");
	 
	scanf("%d", &num);
	
	
	for(int i = 0 ; i < num ; ++i){
					
		printf("%d. Enter number: " , i+1);
		scanf("%f" , &arr[i]);
		printf("\n");
		sum+= arr[i];

	}
	
	
	avg = sum / num;
	
	
	printf("average = %.2f", avg);
	 
	 
	
	return 0 ;
 }
 
 
 