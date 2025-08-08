#include "File.h"
#include <stdio.h>
#include <string.h>

/**
 * @brief Writes a message to a fileName.
 *
 * @param mode what mode the fopen recieves.
 * @param fileName The name or path of the fileName.
 * @return fileName*
 */
FILE *OpenFile(const char *fileName, const char *mode) {
  FILE *FPtr = fopen(fileName, mode);

  if (FPtr == NULL) {
    printf("Error: Failed to open fileName '%s' with mode '%s'.\n", fileName,
           mode);
  }
  return FPtr;
}

/**
 * @brief Writes a message to a fileName.
 *
 * @param message The null-terminated string to write to the fileName.
 * @param fileName The name or path of the fileName.
 * @return void
 */
void WriteToFile(char *message, char *fileName) {
  FILE *FPtr = OpenFile(fileName, "a");
  if (FPtr != NULL) {
    fprintf(FPtr, "%s\n", message);
    printf("Writting Was Succesful...\n");
    fclose(FPtr);
  } else {
    printf("Was Unable To write...\n");
  }
}

void PrintFile(FILE *FPtr) {

  if (FPtr != NULL) {
    char FileContents[sizeof(&FPtr)];

    while (fgets(FileContents, sizeof(&FPtr), FPtr)) {
      printf("%s", FileContents);
    }

  } else {
    printf("The fileName is invaliad\n");
  }
}
