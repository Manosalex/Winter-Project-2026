#include "hospital.h"



void addMedicine()
{
    FILE *fp;
    struct Medicine m;


    fp=fopen("medicine.txt","a");


    printf("\nEnter Medicine ID: ");
    scanf("%d",&m.id);


    printf("Enter Medicine Name: ");
    scanf("%s",m.name);


    printf("Enter Quantity: ");
    scanf("%d",&m.quantity);


    printf("Enter Price: ");
    scanf("%f",&m.price);



    fprintf(fp,"%d %s %d %.2f\n",
    m.id,
    m.name,
    m.quantity,
    m.price);



    fclose(fp);


    printf("\nMedicine Added Successfully!\n");
}




void viewMedicine()
{
    FILE *fp;
    struct Medicine m;


    fp=fopen("medicine.txt","r");


    if(fp==NULL)
    {
        printf("\nNo Medicine Records Found");
        return;
    }



    printf("\n===== Medicine Stock =====\n");



    while(fscanf(fp,"%d %s %d %f",
    &m.id,
    m.name,
    &m.quantity,
    &m.price)!=EOF)
    {

        printf("\nMedicine ID : %d",m.id);
        printf("\nName        : %s",m.name);
        printf("\nQuantity    : %d",m.quantity);
        printf("\nPrice       : %.2f",m.price);

        printf("\n--------------------------");
    }


    fclose(fp);
}
