#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float srPoint;
};

void inputStudentData(struct Student* students, int n);
void printTopStudent(struct Student* students, int n);
