#include "hospital.h"


void addPatient()
{
    FILE *fp;
    struct Patient p;

    fp = fopen("patients.txt","a");

    printf("\nEnter Patient ID: ");
    scanf("%d",&p.id);

    printf("Enter Name: ");
    scanf("%s",p.name);

    printf("Enter Age: ");
    scanf("%d",&p.age);

    printf("Enter Gender: ");
    scanf("%s",p.gender);

    printf("Enter Disease: ");
    scanf("%s",p.disease);

    printf("Enter Phone: ");
    scanf("%s",p.phone);


    fprintf(fp,"%d %s %d %s %s %s\n",
    p.id,
    p.name,
    p.age,
    p.gender,
    p.disease,
    p.phone);


    fclose(fp);

    printf("\nPatient Added Successfully!\n");
}



void viewPatients()
{
    FILE *fp;
    struct Patient p;


    fp=fopen("patients.txt","r");


    if(fp==NULL)
    {
        printf("\nNo Patient Records Found");
        return;
    }


    printf("\n===== Patient Records =====\n");


    while(fscanf(fp,"%d %s %d %s %s %s",
    &p.id,
    p.name,
    &p.age,
    p.gender,
    p.disease,
    p.phone)!=EOF)
    {

        printf("\nPatient ID : %d",p.id);
        printf("\nName       : %s",p.name);
        printf("\nAge        : %d",p.age);
        printf("\nGender     : %s",p.gender);
        printf("\nDisease    : %s",p.disease);
        printf("\nPhone      : %s\n",p.phone);
        printf("--------------------------");

    }


    fclose(fp);
}



void searchPatient()
{
    FILE *fp;
    struct Patient p;
    int id,found=0;


    fp=fopen("patients.txt","r");


    printf("\nEnter Patient ID: ");
    scanf("%d",&id);


    while(fscanf(fp,"%d %s %d %s %s %s",
    &p.id,
    p.name,
    &p.age,
    p.gender,
    p.disease,
    p.phone)!=EOF)
    {

        if(p.id==id)
        {
            printf("\nPatient Found");
            printf("\nName: %s",p.name);
            printf("\nDisease: %s",p.disease);

            found=1;
            break;
        }

    }


    if(found==0)
        printf("\nPatient Not Found");


    fclose(fp);
}
