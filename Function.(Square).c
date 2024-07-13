
#include<stdio.h>

int square(int a)
{
    return a*a;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The result is: %d\n",square(num));
    return 0;
}
