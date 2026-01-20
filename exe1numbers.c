#include <stdio.h>

int main(void)
{
  int a,b;

  printf("Please enter 2 numbers to calculate and print\n");
  printf("enter the first number :");
  scanf("%d", &a);
  
  printf("enter the second number :");
  scanf("%d", &b);
  
  printf("\nThe sum of the 2 numbers is %d\n",a+b);
  printf("The difference between the 2 numbers is %d\n",a-b);
  printf("The multiply of the 2 numbers is %d\n",a*b);
}
