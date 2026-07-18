#include "hospital.h"

int main()
{
    int choice;

    adminLogin();

    while(1)
    {
        printf("\n================================");
        printf("\n  HOSPITAL MANAGEMENT SYSTEM");
        printf("\n================================");

        printf("\n1. Patient Management");
        printf("\n2. Doctor Management");
        printf("\n3. Appointment Management");
        printf("\n4. Billing System");
        printf("\n5. Medicine Management");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d",&choice);


        switch(choice)
        {
            case 1:
                printf("\n1.Add Patient");
                printf("\n2.View Patients");
                printf("\n3.Search Patient");
                printf("\n4.Update Patient");
                printf("\n5.Delete Patient");

                printf("\nEnter option: ");
                scanf("%d",&choice);

                if(choice==1)
                    addPatient();

                else if(choice==2)
                    viewPatients();

                else if(choice==3)
                    searchPatient();

                else if(choice==4)
                    updatePatient();

                else if(choice==5)
                    deletePatient();

                break;


            case 2:
                printf("\n1.Add Doctor");
                printf("\n2.View Doctors");

                printf("\nEnter option: ");
                scanf("%d",&choice);

                if(choice==1)
                    addDoctor();

                else if(choice==2)
                    viewDoctors();

                break;


            case 3:
                printf("\n1.Book Appointment");
                printf("\n2.View Appointment");

                printf("\nEnter option: ");
                scanf("%d",&choice);

                if(choice==1)
                    bookAppointment();

                else if(choice==2)
                    viewAppointments();

                break;


            case 4:
                printf("\n1.Generate Bill");
                printf("\n2.View Bills");

                printf("\nEnter option: ");
                scanf("%d",&choice);

                if(choice==1)
                    generateBill();

                else if(choice==2)
                    viewBills();

                break;


            case 5:
                printf("\n1.Add Medicine");
                printf("\n2.View Medicine");

                printf("\nEnter option: ");
                scanf("%d",&choice);

                if(choice==1)
                    addMedicine();

                else if(choice==2)
                    viewMedicine();

                break;


            case 6:
                printf("\nThank You!");
                exit(0);


            default:
                printf("\nInvalid Choice");
        }
    }

    return 0;
}
