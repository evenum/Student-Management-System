#ifndef STUDENT_H
#define STUDENT_H

struct Student {

    char st_name[16];
    int age;
    float GPA;
    struct Student *nextStudent;
    struct Student *previousStudent;
    
};

struct Student *getNewStudent(char *, const int, const float);
void printStudent(struct Student *);

#endif //STUDENT_H