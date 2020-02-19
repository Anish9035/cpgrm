#include<stdio.h>
int main()
{
double first, second, temp;
printf("enter first number:");
scanf("%lf",&first);
printf("enter second number:");
scanf("%lf",&second);
temp= first;
first= second;
second= temp;
printf("\nafter swapping, first number = %.2lf\n",first:
printf("after swapping, second number = %.2f\n", second);
return 0;
}

