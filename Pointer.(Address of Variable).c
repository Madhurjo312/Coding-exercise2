#include<stdio.h>
int main()
{
    int a;
    int *ptr;

    ptr = &a; // Assign the address of 'a' to ptr

    printf("Address: %p\n", ptr);

    return 0;
}
