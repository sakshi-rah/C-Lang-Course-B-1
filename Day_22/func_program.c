#include<stdio.h>

//Add two numbers using function:

int add(int p, int q){
    return p + q;
}

int main(){
    int num1, num2, result;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    result = add(num1, num2);
    printf("Sum of two numbers: %d\n", result);

    return 0;
}



// Check whether a number is prime or not using function:

int isPrime(int num){ // num = 5
    if(num<=1) return 0; // Not Prime
    for(int i=2; i<=num/2; i++){
        if(num % i == 0) 
        return 0; // Not Prime
    }
    return 1; // Prime
}

int main(){
    int number;
    printf("Enter a number:" );
    scanf("%d", &number);

    // function call for prime num as well as not a prime num.
    if(isPrime(number)){
        printf("%d is a Prime number \n", number);
    }else{
        printf("%d is a not Prime number \n", number);
    }

    return 0;
}


// Factorial of a Number: 5 = 5*4*3*2*1 = 120 0r 1*2*3*4*5 = 120

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int result = factorial(5);
    printf("Factorial = %d\n", result);
    return 0;
}

// Square of a Number:
#include <stdio.h>

int square(int x) {
    return x * x;
}

int main() {
    int result = square(6);
    printf("Square = %d\n", result);
    return 0;
}

// Check Even or Odd:
#include <stdio.h>

void checkEvenOdd(int n) {
    if (n % 2 == 0)
        printf("%d is Even\n", n);
    else
        printf("%d is Odd\n", n);
}

int main() {
    checkEvenOdd(7);
    return 0;
}
