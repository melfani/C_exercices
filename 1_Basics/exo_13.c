#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {

  for (size_t i = 0; i < argc; i++) {

    printf("%s\n", argv[i] );
    /* code */
  }
  return 0;
}