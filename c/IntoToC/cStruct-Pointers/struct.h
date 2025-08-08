#ifndef STRUCT_H
#define STRUCT_H

typedef struct {
    int age;
    char name[20];
}Person;

Person createPerson(int age, char name[20]);

void printPerson(Person* person);

#endif