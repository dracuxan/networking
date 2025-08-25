#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  if (argc < 2) {
    printf("No arguments supplied.\n");
  } else {
    printf("Hello %s!\n", argv[1]);
  }

  return EXIT_SUCCESS;
