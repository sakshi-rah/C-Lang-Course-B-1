#include<stdio.h>
void main(){
    // for descending order = if(arr[j]< arr[j+1])
    int temp;
    int arr[] = {45, 89, 67, 3, 5, 90};// unsorted array 

    for(int i=0; i<6; i++){
        for(int j=0; j<6-i; j++){
            if(arr[j] > arr[j+1]){ 
                // j=0, j=1 => 45 > 89 = F
                // j=1, j=2 => 89 > 67 = T
                temp = arr[j]; // 89
                arr[j] = arr[j+1]; // 67
                arr[j+1] = temp; // 89
                // 45 67 89 3 5 90
            }
        }
    }
    printf("sorted array in ascending order: ");
    for(int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }
}