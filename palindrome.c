#include<stdio.h>
int main()
{
  int n, originalNum, reversedNum = 0, remainder, iteration = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  originalNum = n;
  while(n!=0){
    int remainder = n%10;
    reversedNum = reversedNum * 10 + remainder;
    n/=10;
    iteration++;  
    }
  if(originalNum == reversedNum){
    printf("%d is a palindrome number",originalNum);
  }
  else{
    printf("%d is not a pallindrome number", originalNum);
    }   
}
