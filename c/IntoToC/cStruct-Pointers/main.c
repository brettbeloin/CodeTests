#include "struct.h"
#include <stdio.h>

void StructPointer() {
  Person person;
  int age;
  char name[20];

  printf("How old are you? ");
  scanf("%d", &age);

  printf("What is your name? ");
  scanf("%s", name);

  person = createPerson(age, name);
  printPerson(&person);
}

int main(int argc, char *argv[]) {
  StructPointer();

  return 0;
}
