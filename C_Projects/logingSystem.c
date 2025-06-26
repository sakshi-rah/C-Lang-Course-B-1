#include<stdio.h>
#include<string.h>

int main(){
    // ----------User Login System Project -------
    char userId[20], password[20];
    char loginId[20], loginPass[20];

    printf("------**Create Your Account**------\n");
    printf("Set User ID: ");
    scanf("%s", &userId);

    printf("Set Password: ");
    scanf("%s", &password);

    printf("\n------**User Login**------\n");
    printf("Enter User Id: ");
    scanf("%s", &loginId);

    printf("Enter Password: ");
    scanf("%s", &loginPass);

    if(strcmp(userId, loginId)== 0 && strcmp(password, loginPass)== 0){
        printf("\nLogin Successful! Welcome, %s.\n", loginId);
    }else{
        printf("\nLogin Failed! Incorrect User Id And Password.\n");
    }
    return 0;
}