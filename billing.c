#include "hospital.h"


void generateBill()
{
    FILE *fp;
    struct Bill b;


    fp = fopen("bills.txt","a");


    printf("\nEnter Bill ID: ");
    scanf("%d",&b.id);


    printf("Enter Patient ID: ");
    scanf("%d",&b.patientId);


    printf("Enter Amount: ");
    scanf("%f",&b.amount);


    strcpy(b.status,"Paid");


    fprintf(fp,"%d %d %.2f %s\n",
    b.id,
    b.patientId,
    b.amount,
    b.status);


    fclose(fp);


    printf("\nBill Generated Successfully!\n");
}




void viewBills()
{
    FILE *fp;
    struct Bill b;


    fp=fopen("bills.txt","r");


    if(fp==NULL)
    {
        printf("\nNo Bills Found");
        return;
    }


    printf("\n===== Billing Records =====\n");


    while(fscanf(fp,"%d %d %f %s",
    &b.id,
    &b.patientId,
    &b.amount,
    b.status)!=EOF)
    {

        printf("\nBill ID     : %d",b.id);
        printf("\nPatient ID  : %d",b.patientId);
        printf("\nAmount      : %.2f",b.amount);
        printf("\nStatus      : %s",b.status);

        printf("\n---------------------------");
    }


    fclose(fp);
}
