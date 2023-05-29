#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "student.h"


int main()
{

    struct Student *head = NULL;
    struct Student *new = NULL;

    while (1){

        char name[16];
        int age = 0;
        float gpa = 0;

        char cmd[16];
        fgets(cmd , 16 ,stdin);

        if (strcmp(cmd, "add\n") == 0) {

            printf("Enter student name: ");
            fgets(name, 16, stdin);

            printf("Enter student age: ");
            scanf("%i", &age);

            printf("Enter student GPA: ");
            scanf("%f", &gpa);
            
            if (head == NULL) {

                head = getNewStudent(name, age, gpa);
                if (head != NULL) {new = head;}

            } else {

                new->nextStudent = getNewStudent(name, age, gpa);
                if(new->nextStudent != NULL) {new = new->nextStudent;}    
            }

        } else if (strcmp(cmd, "print\n") == 0) { 
            
            struct Student *t = head;
                while (t != NULL) {

                    printStudent(t);
                    t = t->nextStudent;

                }
        
        } else if(strcmp(cmd, "quit\n") == 0){

            printf("Quitting...\n");
            exit(0);
        
        }
    }
    return 0;
}

