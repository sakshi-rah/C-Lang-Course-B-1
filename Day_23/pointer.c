#include<stdio.h>

/* int main(){
    /* 
        *variable_name = for create pointer , &variable_name = for denoted address.
        A pointer is a variable thet stores the address of another variable.
        data_type *variable_name;
        int *ptr; 
    */
    
/*  int a = 60;
    int *ptr;
    ptr = &a; // add of a 

    printf("Value of a: %d\n", a); // 60
    printf("Address of a %p\n", &a); // 0061FF18
    printf("value stored in ptr: %p\n", ptr); // 0061FF18
    printf("value of ptr %d\n", *ptr); // 60
*/


// Changing Value Uaing pointer:

/* int x = 5; // 5 cut 25 paste
    int *p = &x; // x address stored = 25 
    *p = 25;
    printf("address of X: %p\n", &x);
    printf("Value of X: %d\n\n", x);
*/

// Array and Pointer:

/* 
    int arr[3] = {20, 40, 60};
    int *ptr = arr; // &arr[0], &arr[1], &arr[2]
    for(int i=0; i<3; i++){
        printf("value at arr[%d] = %d\n", i, *(ptr+i)); // value at arr[0] = 20
                                                        // value at arr[1] = 40
    }                                                   // value at arr[2] = 60
 */

    //return 0;
//}


// Pointer in Function: 

void updValue(int *n){
    *n = *n+5; // 20 + 5 = 25
}

int main(){
    int num = 20;
    updValue(&num);
    printf("Updated value: %d\n", num);
}