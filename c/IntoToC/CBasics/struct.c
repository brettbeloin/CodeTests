#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "headers/struct.h"

Person createPerson(int age, char name[20]) {
    Person * person = (Person *)malloc(sizeof(Person));

    person->age = age;
    strcpy(person->name, name);

    return *person;

    free(person);
}

void printPerson(Person* person) {
    printf("Name: %s, Age: %d\n", person->name, person->age);
}
