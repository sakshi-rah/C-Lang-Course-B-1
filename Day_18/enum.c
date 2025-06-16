#include<stdio.h>

// Syntax of Enum: enum keyword name_of_enum {value1, value2, value3};
// Enum: Groups named constants(integers)


//enum Day {SUN, MON, TUE, WED, THUR, FRI, SAT};
        // 0,  1,    2,   3,   4,    5,   6

enum Signal {RED, YELLOW, GREEN};

int main(){
    // enum Day today = THUR;
    // printf("Today is: %d\n", today);
    enum Signal S = GREEN;

    if(S == GREEN){
        printf("GO!\n");
    }else if(S== YELLOW){
        printf("Wait!");
    }else{
        printf("Stop!");
    }

    return 0;
}