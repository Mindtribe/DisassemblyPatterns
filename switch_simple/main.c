#include <stdio.h>
#include <stdlib.h>

static char const *get_string(int stringNum);

int main(int argc, char *argv[]) {
  int stringNum = 0;
  if (argc > 1) {
    stringNum = atoi(argv[1]);
  }
  printf("Kibblez 'n %s\n", get_string(stringNum));
}

static char const *get_string(int stringNum) {
  switch (stringNum) {
  case 0:
    return "Bitz";
  case 1:
    return "Bytez";
  case 42:
    return "Answerz";
  default:
    return "Nothing";
  }
}
