#include <stdio.h>

int main(void) {
  int a, b;
  char oper;

  printf("Enter the number 1:");
  scanf("%d", &a);
  printf("Enter the number 2:");
  scanf("%d", &b);
  printf("enter the operator(''+,-,*,/'): ");
  scanf(" %c", &oper);

  if(oper=='+'){
    printf("the sum is %d\n", a+b);
  }else if (oper== '-'){
    printf("the difference is %d\n", a-b);

  }else if (oper== '*'){
    printf("the product is %d\n", a*b);
  }else if (oper== '/'){

    if (b != 0){
      printf("the division is %d\n", a/b);

    }else {
      printf("the division is not possible\n");
    }
  } else {
    printf("invalid operator\n");
  }
}  
