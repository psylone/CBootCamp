#include <stdio.h>
#include <stdlib.h>
#include "include/word.h"
#include "include/vector.h"


#define MAX_STRING_SIZE     256
#define REPEAT_STRING_COUNT 3
#define VECTOR_SIZE         5

int
main(int argc, char* argv[])
{
  char* my_word = get_word(MAX_STRING_SIZE);

  repeat_word(my_word, REPEAT_STRING_COUNT);

  int* my_vec = get_vec(VECTOR_SIZE);

  print_vec(my_vec, VECTOR_SIZE);

  free(my_word);
  free(my_vec);

  return 0;
}
