/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  //variable declaration
  int mark1 , mark2 ;
  float  avg ;

  //taking keyboard inputs
  printf("Enter mark 1 :  ") ;
  scanf("%d" , &mark1) ;

  printf("Enter mark 2 : ") ;
  scanf("%d" , &mark2) ;

  //calculating average
  avg = (mark1 + mark2) / 2 ;
  printf("average is : %.2f " , avg  ) ; 

  
  return 0;
}

