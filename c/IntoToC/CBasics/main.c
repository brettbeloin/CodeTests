#include "headers/File.h"
#include "headers/struct.h"
#include "headers/test.h"
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

int main() {
  // recursive_function(n);
  // StructPointer();

  char filePath[20] = "Files/Test.txt";
  PrintFile(OpenFile(filePath, "r"));
  WriteToFile("Hello world!!!", "Files/Empty");

  return 0;
}
