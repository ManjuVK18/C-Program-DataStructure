#include<stdio.h>
int main()
{
  int a=1, factorial = 1, num; 
  printf("Enter the positive integer: ");
  scanf("%d", &num);
  do{
    factorial = factorial * a;
    a++;
  }while(a <= num);

  printf("Factorial of %d is: %d", num, factorial);
}

