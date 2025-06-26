#include<stdio.h>

/* int swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(){
    // Swapping two numbers using pointer:
        int x = 5, y= 10;
        swap(&x, &y);
        printf("After Swapping Value: x = %d, y = %d\n", x, y); // x = 10;, y = 5;
    return 0;
} */

// String using Pointer:
int main(){
    char *str = "I Miss You Students!";
    printf("String : %s\n", str);
    
    while (*str != '\0')
    {
        printf("%c ", *str);
        str++;
    }
    return 0;
}