#include<stdio.h>
int main(){
/*
Basic Syntax of While loop:
int i=1;
while(condition){
statement/code
increment/decrement var
}
note: first check the condition then print 
*/

int i = 1;
while(i<=5){
    printf("i = %d\n", i); // 1 2 3 4 5
    i++; // 3
}

/*
int i = 1;
while(i<10){
if(i%2==0){
    printf("\n%d is even number", i);
}else{
    printf("\n%d is odd number", i);
}
i++; 
}
*/
    return 0;
}