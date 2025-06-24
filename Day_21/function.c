#include<stdio.h>

// User Defined function
// Syntax of Function 
/* return_type function_name (Aug list){
    code ; // int, void
} 
call the function:
function_name(aug list);
*/

// 1.Function with no aug and no return value
/*
void demo(){
    printf("Hello! Welcome to the class of c programming\n");
    printf("Hello! Welcome to the Batch 1");
}

int main(){
    demo(); // function call
    return 0;
}
*/

// 2. Function with aug and no return value
/*
void printSum(int a, int b){
    int sum = a+b;
    printf("Sum = %d\n", sum); // Sum = 70
}

int main(){
    printSum(30, 40);
    return 0;
}
*/

// 3. Function with no aug and return value
/* int getNum(){
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    return num;
}

int main(){
    int value = getNum();
    printf("your number: %d\n", value);
    return 0;
}
*/

// 4. Function with aug and return value
int multy(int x, int y){
    return x*y;
}

int main(){
int result =  multy(50, 100);
int anResult = multy(34, 5);
printf("Multiply of X & Y: %d\n", result);
printf("Multiply of X & Y: %d", anResult);
// printf("Multiply: %d", multy(10,25));
    return 0;
}