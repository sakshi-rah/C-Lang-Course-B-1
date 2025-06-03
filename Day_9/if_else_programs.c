#include<stdio.h>
int main(){ 
    int x, y, z;
    printf("Enter Three Number: \n");
    scanf("%d%d%d", &x,&y,&z);
    //greater number
    if(x>y && x>z){ // x is greater 1 && 0 = 0
        printf("%d is greater number", x);
    }else if(y>z){ // false
        printf("%d is greater number", y);
    }else{
        printf("%d is greater number", z);
    }
    
    //Leap Year 366 days 29th feb 
    //1. year divided by 4 is called leap yr.
    //2. year divide by 400 is also leap yr.
    //3. year divided by 100 is not a leap yr but if year ivided by 400 or 4 then this yr. will be leap yr.

    int year;
    printf("Enter Year: ");
    scanf("%d", &year);
    if (year%400 == 0){
        printf("%d is leap year", year);
    }else if(year%4 == 0){
        printf("%d is leap year", year);
    }else if(year%100 == 0){
        printf("%d is not leap year", year);
    }else{
        printf("%d is not leap year", year);
    }
    
    char ch = 'i';
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch== 'u'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    return 0;
}