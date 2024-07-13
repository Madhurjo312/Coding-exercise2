#include<stdio.h>
int main()
{
    float degree,radian;
    const float Pi=3.14159;
    printf("Enter the value of degree: ");
    scanf("%f",&degree);
    radian = degree *(Pi/180);
    printf("Sin(%f) = %f\n",degree,sin(radian));
    printf("Sin(%f) = %f\n",degree,cos(radian));
    printf("Sin(%f) = %f\n",degree,tan(radian));
    printf("Sin(%f) = %f\n",degree,1/sin(radian));
    printf("Sin(%f) = %f\n",degree,1/cos(radian));
    printf("Sin(%f) = %f\n",degree,1/tan(radian));



}
