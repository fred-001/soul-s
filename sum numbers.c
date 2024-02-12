#include <stdio.h>

int main (){
  // variambles
  int num1, num2, sum;

 // input from user
 printf("Enter the first number : ");
 scanf("%d", &num1);

printf("Enter second number : ");
scanf("%d",&num2 );

  //calculate sum
  sum = num1 + num2;

  // Display the result
  printf("The sum of %d and %d is: &d\n", num1,num2, sum);

  return 0;
}