#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

struct Student *getNewStudent(char name[], const int age, const float GPA){

    struct Student *newStudent = malloc(sizeof(struct Student));

    strcpy(newStudent->st_name, name);
    newStudent->age = age;
    newStudent->GPA = GPA;

    newStudent->nextStudent = NULL;
    newStudent->previousStudent = NULL;

    printf("New student created successfully!\n");
    return newStudent;
}

void printStudent(struct Student *student){

    printf("\nStudent name: %sStudent age: %i\nStudent GPA: %f\n",
             student->st_name, student->age, student->GPA);

}
