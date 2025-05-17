#include<stdio.h>

int main(){
//Input fron user using scanf() predefined function40
// int num1;
// printf("Enter your num1 value: ");
// scanf("%d", &num1);
// printf("num1 value : %d\n", num1);

int x;
printf("Enter x value:");
scanf("%d", &x);
printf("value of x : %d\n", x);

int y;
printf("Enter y value:");
scanf("%d", &y);
printf("value of y : %d\n", y);

int sum = x+y;
int sub = x-y;
int multi = x*y;
printf("sum of x and y is %d\n", sum);
printf("sub of x and y is %d\n", sub);
printf("multi of x and y is %d\n", multi);

return 0;

}