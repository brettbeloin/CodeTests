#include <stdio.h>
#include <string.h>

extern FILE *FPtr;
extern char filePath[20];
extern char fileContent[sizeof(&FPtr)];

FILE *OpenFile(const char fileName[20], const char mode[1]);
void WriteToFile(char message[256], char fileName[20]);
void PrintFile(FILE *FPtr);
