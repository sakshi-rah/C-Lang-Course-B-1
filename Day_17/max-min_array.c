#include<stdio.h>
int main(){
int num[] = {10, 23, 5, 7, 2};
// initial level consider as a normal value(num[0]);

// Minimum Number
int min = num[0]; // min=10
for(int i=0; i<5; i++ ){ // i=1
if(num[i] < min){ // 2<5=t
    min = num[i]; // num[2] = 5, num[4] =2,
}
}
printf("Minimum number is %d\n", min);

//Maximum Number
int max = num[0]; // max=10
for(int i=0; i<5; i++ ){ // i=1
if(num[i] > max){ //
    max = num[i]; // 
}
}
printf("Maximum number is %d\n", max);

return 0;
}