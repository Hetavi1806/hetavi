#include<stdio.h>  // Standard I/O library for input and output
// Recursive function to calculate the sum of digits of a number
int sumofdigits(int n)
{
	if (n==0) // Base case: when n becomes 0, stop recursion 
	return 0;
	else
	return(n%10)+ sumofdigits(n/10); // Extract last digit and call recursively for remaining number
}
int main()
{
	int num; // Variable to store user input
// Prompt the user to enter a number 
	printf("Enter a number:");
	scanf("%d",& num); // Read user input 
// Handle negative numbers by converting them to positive
if (num<0)
{
	num=-num; // Convert negative number to positive
	}	
	// Call recursive function and store the result
	int result = sumofdigits(num);
	// Display the sum of digits
	printf("Sum of digits of %d is %d\n", num, result);
	return 0; // Indicate successful execution
}

