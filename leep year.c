#include <stdio.h>
int main() {
int year;
printf("Enter a year: ");
scanf("%d", &year);
if (year % 4 == 0)
printf("this is a leap year");
else{
printf("this is not a leap year");
}
return 0;
}