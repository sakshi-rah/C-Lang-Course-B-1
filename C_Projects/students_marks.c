#include<stdio.h>
#include<string.h>


// Structure to store student details
struct Student{
char name[50];
int roll;
float marks[4]; // marks in 4 subjects (array)
float total;
float percentage;
};

// take input from students using function
void inputStudent(struct Student *s){
    printf("\nEnter Student Name: ");
    scanf("%[^\n]", s->name);

    printf("Enter Roll Number: ");
    scanf("%d", &s->roll);

    s->total = 0; // 0 + something = something;
    printf("Enter marks of 4 subjects: \n");
    for(int i = 0; i<4; i++){
        printf("Subject %d: ", i+1); // i=0 , 0+1 = 1, Student 1
        scanf("%f", &s->marks[i]);
        s->total += s->marks[i];
    }

    s->percentage = s->total/4.0;
}

// Display Students Result
void displayStudent(struct Student s){
    printf("\n------* Student Result Display *------\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    for(int i=0; i<4; i++){
        printf("Marks in subject %d: %2f\n", i+1, s.marks[i]);
    }
    printf("Total Marks: %.2f\n", s.total);
    printf("Percentage: %.2f %% \n", s.percentage);

    // Grade based on Percentage
    if(s.percentage>=90)
    printf("Grade: A\n");
    else if(s.percentage >=75)
    printf("Grade: B\n");
    else if(s.percentage >=60)
    printf("Grade: C\n");
    else if(s.percentage >=40)
    printf("Grade: D\n");
    else
    printf("Grade: F(Fail)\n");

}

int main(){
    struct Student std;

    printf("\n===== Student Result =====\n");

    inputStudent(&std);
    displayStudent(std);

    return 0;
}