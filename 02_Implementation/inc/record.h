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

/**
 * @brief Structure that stores all the details of students
 * @return input of students record
*/

struct student {
    char first_name[20];
    char last_name[20];
    int roll_no;
    char Class[10];
     char vill[20];
    float per;
};



/**
 * @brief Adding the information of students in .txt file
 * @return result of added database
 */
    
    void addstudent();

/**
 * @brief Display the Students record
 * @return result to show the data
 */
    void studentrecord();


/**
 * @brief Searching the record of specific students which we want to search
 * @returns result to show the searched data
 */
   
    void studentrecord();

/**
 * @brief Deleting the record of specific students which we want to Delete
 * @returns result to show the data is deleted
 */
    void delete();
        
/**
 * @brief Use can give any file name. Give the name with extension or without extension
 */
    
    fp=fopen("information.txt","r");

/**
 * @brief Closes the file
 */
    
    fclose(fp);
