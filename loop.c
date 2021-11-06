#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  if (argc != 3) {
    fprintf(stderr, "Command usage: loop <round> <command>\n");
    exit(1);
  }

  int iter = atoi(argv[1]);
  for (int i = 0; i < iter; i++) {
    if (system(argv[2]) < 0) {
      fprintf(stderr, "Error!\n");
      exit(1);
    }
  }

  return 0;
}
