#include <stdio.h>

int SumOfDigits(int n){
	  if (n==0)
	  return 0;
	  else
	  return (n % 10) + SumOfDigits(n / 10);

}
int main() {
	 int num;
	 printf("enter a number : -");
	 scanf("%d" , &num);
	 
	 if ( num < 0){
	 	num = -num;
	 }
	 int result = SumOfDigits(num);
	 printf("sum of digits of %d is %d\n" ,num, result);
	 
	  return 0;
	  
	 }
