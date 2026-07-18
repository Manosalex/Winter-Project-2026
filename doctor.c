#include "hospital.h"


void addDoctor()
{
    FILE *fp;
    struct Doctor d;

    fp = fopen("doctors.txt","a");


    printf("\nEnter Doctor ID: ");
    scanf("%d",&d.id);

    printf("Enter Doctor Name: ");
    scanf("%s",d.name);

    printf("Enter Specialization: ");
    scanf("%s",d.specialization);

    printf("Enter Phone Number: ");
    scanf("%s",d.phone);


    fprintf(fp,"%d %s %s %s\n",
    d.id,
    d.name,
    d.specialization,
    d.phone);


    fclose(fp);

    printf("\nDoctor Added Successfully!\n");
}



void viewDoctors()
{
    FILE *fp;
    struct Doctor d;


    fp=fopen("doctors.txt","r");


    if(fp==NULL)
    {
        printf("\nNo Doctor Records Found");
        return;
    }


    printf("\n===== Doctor List =====\n");


    while(fscanf(fp,"%d %s %s %s",
    &d.id,
    d.name,
    d.specialization,
    d.phone)!=EOF)
    {

        printf("\nDoctor ID : %d",d.id);
        printf("\nName      : %s",d.name);
        printf("\nSpecial   : %s",d.specialization);
        printf("\nPhone     : %s",d.phone);

        printf("\n-----------------------");
    }


    fclose(fp);
}
