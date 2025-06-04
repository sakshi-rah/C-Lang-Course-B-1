#include<stdio.h>
int main(){
// i = row j= col 
//printf("Reverse Number");
    // int i, j;
    // for(i=15; i>=1; i--){ // 0 = f 
    //     printf("%d ", i);
    // }

printf("\nRight-Angle Triangle Star pattern program: \n");
int i, j;
for(i=1; i<=5; i++){// i=6
    for(j=1; j<=i; j++){// j=2->3
        printf("* ");
    }
    printf("\n");
}

/*
*
* *
* * *
* * * *
* * * * *
*/


printf("\nRight-Angle Triangle in Number pattern program: \n");
int a, b;
for(a=1; a<=5; a++){ // i =1
    for(b=1; b<=a; b++){// j=3
        printf("%d ", b+1);
    }
    printf("\n");
}

/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5 
*/

printf("\nReverse Right-Angle Triangle Star pattern program: \n");
int p, q;
for(p=5; p>=1; p--){// i=6
    for(q=1; q<=p; q++){// j=2->3
        printf("* ");
    }
    printf("\n");
}

/*

* * * * * 
* * * *
* * *
* *
*

*/
return 0;
}