#include<stdio.h>
#include<string.h>
int main(){
/*

| `strrev()`  | Reverse string (non-standard)       |
| `strupr()`  | Convert to uppercase (non-standard) |
| `strlwr()`  | Convert to lowercase (non-standard) |

*/

// Strrev()

/*char name[30] = "Gunjan Rokade";
printf("Original String: %s\n", name); // Gunjan
printf("Reverse String: %s\n", strrev(name)); // najnuG
*/

// Strlwr() and Strupr()
/*
char str[] = "C PROGRAMMING CLASS";
char str1[] = "batch of c class";
printf("Lowercase: %s\n", strlwr(str));
printf("Uppercase: %s\n", strupr(str1));
*/

// Find Length of string without using strlen()

char name[] = "GOOD EVENING everyone";
// using for loop
/*
int length = 0;
for(int i=0; name[i]!= '\0'; i++){
    length++;
}
printf("Length: %d\n", length);
*/

// using While loop
int i=0;
while(name[i]!='\0'){
    i++;
}
printf("Length: %d\n", i);

// string reverse without using strrev()

char str[] = "hello world";
int len = strlen(str); // 5
printf("Reversed: ");
for (int i=len-1; i >= 0; i--) {
    printf("%c", str[i]); // dlrow
}


return 0;
}