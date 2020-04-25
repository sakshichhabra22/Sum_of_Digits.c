#include <stdio.h>
int sum_of_digit(int a)
{
  if (a==0)
     return 0;
  
  return ((a%10)+sum_of_digit(a/10));
}
int main()
{
  int n,sum;
  printf("Enter a Number: ");
  scanf("%d",&n);
  sum=sum_of_digit(n);
  printf("Sum is: %d",sum);
  return 0;
}

