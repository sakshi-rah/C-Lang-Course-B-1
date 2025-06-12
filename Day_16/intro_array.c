#include <stdio.h>
int main()
{
    /* An array is a collection of variables of the same data type stored in contiguous memory 
    locations. It allows you to store and access multiple values using a single variable name 
    with an index.*/
    // Syntax of Array in C.
    //data_type array_name[size];

    int arr[] = {10, 30, 50, 70, 90};

    /*
    printf("The first element of array is %d\n", arr[0]); //10
    printf("The second element of array is %d\n", arr[1]); //30
    printf("The third element of array is %d\n", arr[2]); //50
    printf("The fourth element of array is %d\n", arr[3]); //70
    printf("The fifeth element of array is %d\n", arr[4]); //90
    */
    
    /*for(int i=0; i<5; i++){
        printf("Array Element [%d]: %d \n", i, arr[i]);
    }*/


    printf("-----Getting array elements from user------\n");
    int marks[4], sum = 0;
    float avg;

    printf("Enter 4 elements: ");
    for(int i=0; i<4; i++){
        scanf("%d", &marks[i]);
    }
    printf("------Your Array Elements-----\n");
    for(int i=0; i<4; i++){
        printf("Array Element [%d]: %d\n",i, marks[i]);
        sum += marks[i];
        avg = sum/4.0;// sum/(size of array)
    }
    printf("Sum of array elements: %d\n", sum);
    printf("Avarage of array elements: %f\n", avg);
    return 0;
}