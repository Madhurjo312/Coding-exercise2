
#include <stdio.h>

int main() {
  int i,number,flag=0;
  printf("Enter a positive integar: ");
  scanf("%d",&number);

  if (number == 0 || number == 1)
  {
      flag = 1;
  }
  for (i=2; i<=number/2; i++)
  {
      if (number%i == 0)
      {
          flag = 1;
          break;
      }
  }
  if (flag == 0)
  {
      printf("Prime number");
  }
  else
  printf("Not prime number");
    return 0;
}
