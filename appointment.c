#include "hospital.h"


void bookAppointment()
{
    FILE *fp;
    struct Appointment a;


    fp=fopen("appointments.txt","a");


    printf("\nEnter Appointment ID: ");
    scanf("%d",&a.id);


    printf("Enter Patient ID: ");
    scanf("%d",&a.patientId);


    printf("Enter Doctor ID: ");
    scanf("%d",&a.doctorId);


    printf("Enter Date (DD/MM/YYYY): ");
    scanf("%s",a.date);



    fprintf(fp,"%d %d %d %s\n",
    a.id,
    a.patientId,
    a.doctorId,
    a.date);



    fclose(fp);


    printf("\nAppointment Booked Successfully!\n");
}



void viewAppointments()
{
    FILE *fp;
    struct Appointment a;


    fp=fopen("appointments.txt","r");


    if(fp==NULL)
    {
        printf("\nNo Appointments Found");
        return;
    }


    printf("\n===== Appointment Details =====\n");


    while(fscanf(fp,"%d %d %d %s",
    &a.id,
    &a.patientId,
    &a.doctorId,
    a.date)!=EOF)
    {

        printf("\nAppointment ID : %d",a.id);
        printf("\nPatient ID     : %d",a.patientId);
        printf("\nDoctor ID      : %d",a.doctorId);
        printf("\nDate           : %s",a.date);

        printf("\n------------------------------");
    }


    fclose(fp);
}
