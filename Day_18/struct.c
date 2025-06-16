#include<stdio.h>
//data_type: int, char, float, double
    // structure: user def data_type

// Syntax of Structure: struct keyword(struct) stucture_name{};
/*struct student{
        int roll_no;
        char name[50];
        float mark;
};
*/

struct Book {
    char title[50];
    float price;
};

int main(){

    /*struct student s = {1, "Aachal", 99.99};
    printf("-------Students Detail----------\n");
    printf("Roll No: %d\n", s.roll_no);
    printf("Student Name: %s\n", s.name);
    printf("Student Mark: %f\n", s.mark);
    */

    struct Book b = {"C Programming", 567.90};
    printf("--------Books Details-------------\n");
    printf("Title of Book: %s\n", b.title);
    printf("Price of Book: %f\n", b.price);

    return 0;
}