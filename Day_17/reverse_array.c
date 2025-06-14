#include<stdio.h>
int main(){
    // Print Reverse Array Elements
    //int arr[]= {4, 5, 10, 13, 17}; // 17 13 10 5 4
    int marks[] = {20, 30, 60, 45, 35}; // 35 45 60 30 20
    for(int i=4; i>=0; i--){ // i = index
        printf("%d ", marks[i]);
    }

    return 0;
}