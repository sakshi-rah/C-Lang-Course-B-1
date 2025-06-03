#include<stdio.h>
int main(){
//3. Assignment operators (=,+=,-=,*=,/=,%=)
//4. Relational Operators (<,<=,>,>=,==,!=)
//5. Logical operators (&&,||,!)

// Assignment operators//
printf("\nAssignment operators (=,+=,-=,*=,/=,%=)\n");
int y = 2;
printf("y is %d\n", y);
 y += 4; // y = y + 4; y=2+4 = 6
printf("y+ is %d\n",y); // y=6
 y -= 1; // y = y-1 y=6-1=5 
printf("y- is %d\n",y); // y=5
 y *= 6; // y= y*6 y= 5*6= 30
printf("y* is %d\n",y); // y=30
 y /= 3; // y = y/3 y=30/3
printf("y/ is %d\n",y); // y=10
 y %= 8; // y= y%8 y=10%8
printf("yMod is %d\n",y); // y=2

//Relational Operators (<,<=,>,>=,==,!=)
printf("\nRelational Operators (<,<=,>,>=,==,!=)\n");
int p = 55, q = 55;
printf("less than (<) is %d\n", p<q); // 0
printf("less than and equal to (<=) is %d\n", p<=q); // 1
printf("greater than (>) is %d\n", p>q); // 0
printf("greater than and equal to (>=) is %d\n", p>=q); // 1
printf("equals to (==) %d\n", p==q); //  1
printf("not equals to (!=) %d\n", p!=q); // 0


//Logical operators (&&,||,!)
printf("\nLogical operators (&&,||,!)\n");
// && = and = 1 1 = 1, 0 1= 0, 1 0 = 0, 0 0 = 0;
// || = or = 1 1 = 1, 0 1 = 1, 1 0 = 1, 0 0 = 0;
// ! = 1 = 0, 0 = 1

int m = 1, n= 0;
printf("m & n = %d\n", m&&n); // 1 0 = 0
printf("m | n = %d\n", m||n); // 1 0 = 1
printf("!m= %d\n", !m); // m=1 !m=0
printf("!n= %d", !n); // n=0 !n=1

return 0;
}