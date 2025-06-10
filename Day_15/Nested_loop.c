#include<stdio.h>
int main(){
// Nested While Loop

/*int i=1;
while(i<=3){// i = 1
    int j=1;
        while(j<=3){
            printf("%d ", j);
                j++;
        }
printf("\n");
i++;
}*/

// Nested Do While Loop
int i = 1;
do{
    int j = 1;
    do{
        printf("* ");
        j++;
    }while(j<=5);

    printf("\n");
    i++;

}while(i<=5);

    return 0;
}