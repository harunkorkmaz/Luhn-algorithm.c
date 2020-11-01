#include <stdio.h>

// LUHN ' S Algorithm

void luhn_algorithm() {
	int size_of_numbers = 0 , numbers_int[100] , i=0 , control =0 ,total =0, temp=1;
	char numbers_char[100]; // (4)0(0)3(6)0(0)0(0)0(0)0(0)0(1)4

	puts("CARD NUMBERS : ");
	gets(numbers_char);      					 // input

	while ( numbers_char[i++] != '\0' )
	{
	    size_of_numbers++;    					 // Current value is 16
	}

	for (i = 0; i < size_of_numbers; i++) 		 // converting char array to int array . ASCII 
	{
	   	numbers_int[i]= (numbers_char[i]+2)%10;   
	}


	for( i = 0; i < size_of_numbers; i++ ){ 	 // control that all numbers are they in between 59 47
	
		if(numbers_int[i] < 59 && numbers_int[i] > 47){	
			control++; 							 // if all numbers are correctly entered contorl gonna equals to 16
		}
	}

	if(size_of_numbers != 16 || control == 16 )
	{
		printf("\nwrong or missing number you entered.");
	}
	else
	{

	
		for ( i = size_of_numbers -2 ; i >= 0; i -= 2 ){
			temp = numbers_int[i] * 2; 
			total+=numbers_int[i+1];
			if( temp > 9){
				total+=temp/10;
				total+=temp%10;
			}
			else
			{
				total+=temp;
			}
		
		}	
			printf("total: %d \n",total);
	
	
		if((total%10)==0)
	
			 printf("this card is real ");
	
		else 
	
			printf("this card is real ");

}

	
} 


void  main (){
	
	luhn_algorithm();


}
