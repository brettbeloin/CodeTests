#include <stdio.h>
#include <string.h>

extern char file[20];

extern FILE *FPtr;

/*
FILE OpenFile(char file[20]);
FILE WriteToFile(char file[20]);
FILE CloseFile(char file[20]);
*/
void OpenFile(char file[20]);
void WriteToFile(char file[20]);
void CloseFile(char file[20]);
