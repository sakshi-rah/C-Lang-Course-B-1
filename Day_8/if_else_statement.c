#include<stdio.h>

int main(){
// Use if to specify a block of code to be executed, if a specified condition is true
// Use else to specify a block of code to be executed, if the same condition is false
// Use else if to specify a new condition to test, if the first condition is false
int x = -7;

// if(x>0){
//     printf("x is positive\n"); // 
// }
// else{
//     printf("x is Negative\n");
// }
int num = -25;

// if(num < 0){ // 0<0= false
//     printf("number is negative");
// }
// else if (num == 0){ // 0 == 0 = true
//     printf("number is zero");
// }
// else{
//     printf("number is positive");
// }
int x = 67;

if(num%2 == 0){ 
     //26%2 == 0 // 0 == 0 = true
    printf("%d is Even Number\n", num);
}else if(num<0){
    printf("%d is Negative Number\n", num);
}
else{
    printf("%d is Odd Number\n", num);
}


// Today Home Work
//if = 40<x // Grade C
//else if = 60<x // Grade B
//else if = 80<x // Grade A
//else if =  90<x // Good
//else = 40>x // fail 


    return 0;
}