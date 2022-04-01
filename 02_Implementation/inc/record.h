/**
 * @file record.h
 * @author Rohini Tayade
 * @brief Header file for Student record System to record or save the data
 *
 */
    #ifndef RECORD_C
    #define RECORD_C

#include <stdio.h>  //Provides the core input and output capabilities of the C language.
#include<stdlib.h> //or performing a variety of operations, including conversion,pseudo-random numbers, memory allocation, process control, environment,signalling, searching, and sorting.

// Structure that stores all the details of students
struct student {
    char first_name[20];
    char last_name[20];
    int roll_no;
    char Class[10];
     char vill[20];
    float per;
};

// Switch case that select the action what you want to do
   switch(choice){
       case 1;
       break;
   }

// Adding the information of students
    void addstudent1();

// Display the Students record
    void studentrecord1();

// Searching the record of specific students which we want to search
    void studentrecord1();

// Deleting the record of specific students which we want to Delete
    void delete1();
        
//Use can give any file name. Give the name with extension or without extension
    fp1=fopen("information.txt","r");

// Closes the file
    fclose(fp1);
