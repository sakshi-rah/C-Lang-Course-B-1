#include<stdio.h>
int main(){
// Switch Case 
/*
switch (expression/ ch){
    case value1: statement
    break;
    case value2: statement
    break;
    case value2: statement
    break;
    default: statement
    break;
}
*/ 

int a, b;
char op;
printf("Enter values of a :");
scanf("%d", &a);

printf("Enter operator(+,-,*,/,Mod): ");
scanf(" %c", &op);

printf("Enter values of b :");
scanf("%d", &b);

switch(op){
    case '+': printf("Sum of a and b: %d\n", a+b);
    break;
    case '-': printf("Sub of a and b: %d\n", a-b);
    break;
    case '*': printf("Multi of a and b: %d\n", a*b);
    break;
    case '/': printf("Div of a and b: %d\n", a/b);
    break;
    case '%': printf("Mod of a and b: %d\n", a%b);
    break;
    default: printf("Invalid operator");
}

// weaks days

int day;
printf("Enter Day: ");
scanf(" %d", &day);

switch(day){
    case 1: printf("Sunday");
    break;
    case 2: printf("Monday");
    break;
    case 3: printf("Tuesday");
    break;
    case 4: printf("Wednesday");
    break;
    case 5: printf("Thursday");
    break;
    case 6: printf("Friday");
    break;
    case 7: printf("Saturday");
    break;
    default: printf("Invalid Day");
}


    return 0;
}

    