#include<stdio.h>
#include<string.h>

int main(){
// Strlen()

    /*char Name[30]; // array of character
    printf("Enter Your String: ");
    scanf("%s", Name);
    printf("Your String: %s\n", Name);
    int length = strlen(Name);
    printf("Length %d\n", length);
    */
    //printf("Length of String: %lu\n", strlen(Name));

// Strcat()

    /*char str1[20] = "Supriya";
    char str2[20] = " Kadav";
    printf("String1: %s\n", str1); // Supriya
    printf("String2: %s\n", str2); // Kadav
    strcat(str1,str2);
    printf("Concatenated String: %s\n", str1); // Supriya Kadav
    */

// Strcpy()

/*
    char name[] = "good_evening";
    char copy[10];
    printf("name string value is %s\n", name); // str_cpy
    printf("Copy string value is %s\n", copy); // random string value
    strcpy(copy, name);
    printf("Copy String is %s\n", copy); // str_cpy

*/

// strcmp()
char color[20] = "Blue";
char color1[20] = "Pink";

if(strcmp(color, color1)== 0){
    printf("Colors are Same");
}else{
    printf("Colors are not Same");
}

    return 0;
}

// String Functions
/*
| Function    | Use                                 |
| ----------- | ----------------------------------- |
| `strlen()`  | Find string length                  |
| `strcpy()`  | Copy string                         |
| `strcat()`  | Concatenate                         |
| `strcmp()`  | Compare strings                     |
| `strrev()`  | Reverse string (non-standard)       |
| `strupr()`  | Convert to uppercase (non-standard) |
| `strlwr()`  | Convert to lowercase (non-standard) |
*/