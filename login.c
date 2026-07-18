#include "hospital.h"

void adminLogin()
{
    char username[20];
    char password[20];

    printf("\n==============================");
    printf("\n     HOSPITAL ADMIN LOGIN");
    printf("\n==============================");

    printf("\nEnter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%s", password);


    if(strcmp(username,"admin")==0 && strcmp(password,"1234")==0)
    {
        printf("\nLogin Successful!\n");
    }
    else
    {
        printf("\nInvalid Login!");
        exit(0);
    }
}
