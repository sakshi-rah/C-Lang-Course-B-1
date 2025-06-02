#include<stdio.h>
int main(){
    /*int i;
    int num = 10;
    for(int i = 1; i <= num; i++) {
        printf("%d\n ", i);
    }*/

    // f(n) = f(n-1) + f(n-2)= fibonacci series formula
    int n, a = 0, b = 1, next;
    printf("Enter the number of terms:");
    scanf("%d", &n);

    printf("Fibonacci Series: %d %d ", a, b);
    for(int i=3; i<=n; i++){ //  n = 20
        next = a+b; // 0+1 = 1
        printf("%d ", next); // 1
        a = b; // a = 2
        b = next; // b = 3
    }

    return 0;
}

// Fibonacci series: 0 1 1