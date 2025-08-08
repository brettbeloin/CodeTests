#include "File.h"

int main(int argc, char *argv[]) {
  char filePath[20] = "Files/Test.txt";
  PrintFile(OpenFile(filePath, "r"));
  WriteToFile("Hello world!!!", "Files/Empty");

  return 0;
}
