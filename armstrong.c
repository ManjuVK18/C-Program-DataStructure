#include<stdio.h>
int main()
{
  int n, orginalNum, result = 0, remainder, digits = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  orginalNum = n;
  while (orginalNum != 0)
  {
    orginalNum /= 10;
    digits++;
  }
  orginalNum = n;
  while(orginalNum != 0)
  {
    remainder = n%10;
    remainder = orginalNum %10;
    result += pow(remainder, digits);
    orginalNum /= 10;
    
  }
  if(result == n)
    printf("%d is a armstrong number",n);
  
  else
    printf("%d is not a armstrong number", n);

  
    
}
























































