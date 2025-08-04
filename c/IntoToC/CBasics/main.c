#include <stdio.h>
#include "headers/test.h"
#include "headers/struct.h"


int main() {
    // recursive_function(n);

    Person person;
    int age;
    char name[20];

    printf("How old are you? ");
    scanf("%d", &age);

    printf("What is your name? ");
    scanf("%s", name);

  
    person = createPerson(age, name);
    printPerson(&person);

    return 0;
}

