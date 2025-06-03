#include<stdio.h>
void main(){
/*
Basic Syntax of Do While loop:
int i=1;
do{
code
increment/decrement var
}while(condition);

note : at least print once then check the condition
*/

int i = 6;
do{
    printf("%d\n", i); // 1 2 3 4 5
    i++; //7
}while(i<=5); // 6<=5 = f = break;


}