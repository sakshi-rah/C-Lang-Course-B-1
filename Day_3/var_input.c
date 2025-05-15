#include<stdio.h>

int main(){
//Input fron user using scanf() predefined function
int num1;
printf("Enter your num1 value: \n");
scanf("%d", &num1);
printf("num1 value : %d", num1);

int x;
printf("Enter x value:");
scanf("%d", &x);
printf("value of x : %d", x);

int y;
printf("Enter y value:");
scanf("%d", &y);
printf("value of y : %d", y);

int sum = x+y;
printf("sum of x and y is %d", sum);

return 0;
}