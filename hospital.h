#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Patient Structure
struct Patient {
    int id;
    char name[50];
    int age;
    char gender[10];
    char disease[50];
    char phone[15];
};

// Doctor Structure
struct Doctor {
    int id;
    char name[50];
    char specialization[50];
    char phone[15];
};

// Appointment Structure
struct Appointment {
    int id;
    int patientId;
    int doctorId;
    char date[20];
};

// Bill Structure
struct Bill {
    int id;
    int patientId;
    float amount;
    char status[20];
};

// Medicine Structure
struct Medicine {
    int id;
    char name[50];
    int quantity;
    float price;
};


// Function declarations

void adminLogin();

void addPatient();
void viewPatients();
void searchPatient();
void updatePatient();
void deletePatient();

void addDoctor();
void viewDoctors();

void bookAppointment();
void viewAppointments();

void generateBill();
void viewBills();

void addMedicine();
void viewMedicine();


#endif
