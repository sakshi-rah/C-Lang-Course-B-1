#include<stdio.h>
void main(){
// Sum of first Natural numbers
    /*int n, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){// n= 5
        sum +=i; // sum = sum + i;  sum = 0 +1 = 1 i = 2, 1+2 = 3 i=3, 3+3 = 6 i=4, 6+4 = 10, i=5, 10+5 = 15
    }
    printf("Sum of first natural numbers: %d", sum);
*/

// Swapping two numbers without using third variable
int a = 30, b = 50;
// a=50, b=30
a = a + b; // 30 + 50 = 80, a = 80
b = a - b; // 80 - 50 = 30, b = 30
a = a - b; // 80 - 30 = 50, a = 50

printf("a = %d b: %d", a, b);

}