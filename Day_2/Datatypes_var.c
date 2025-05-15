#include<stdio.h>

int main(){
// primitive datatypes
//	int; 4 byte
//	char; 1 byte
//	float; 4 byte

//formate s
//int = %d
//char = %c string %s
//float =  %f

	// datatype variable_name = value;

const int data = 33; //33
// data = 88;
printf("data: %d\n", data);

char name = 'N';
printf("%c\n", name);

float per = 95;
printf("marks: %f\n", per);

	int num_01 = 10;
	int num01 = 20;
	char student_name='S';
	char student_name_1[20]="Achal";
	float roll_num = 34.67; 
	
	
	printf("%c\n", student_name); //s
	printf("%f\n", roll_num); //34.6778
	printf("%s\n", student_name_1); //Achal
	
	return 0;
}
