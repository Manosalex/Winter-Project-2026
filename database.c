#include "hospital.h"


void createDatabase()
{
    FILE *fp;


    fp=fopen("patients.txt","a");
    fclose(fp);


    fp=fopen("doctors.txt","a");
    fclose(fp);


    fp=fopen("appointments.txt","a");
    fclose(fp);


    fp=fopen("bills.txt","a");
    fclose(fp);


    fp=fopen("medicine.txt","a");
    fclose(fp);


    printf("\nDatabase Initialized Successfully!\n");
}
