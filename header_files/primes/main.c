#include <stdio.h>
#include <stdlib.h>
#include "primes.h"

/*
 * main.c
 *
 * Input:
 *
 *   Takes one integer argument from the command line.
 *
 * Output:
 *
 *   Returns 1 if it's a prime number or 0 if not.
 *
 * Errors:
 *
 *   (1) - No comand line argument was provided.
 */

int
main(int argc, char* argv[])
{
  if (argc < 2) {
    printf("error (1): please, provide an integer argument\n");
    return 1;
  }

  char* answer[] = { "NO", "YES" };

  int n = atoi(argv[1]);

  printf("%d is a prime number?\n", n);
  printf("%s\n", answer[is_prime(n)]);

  return 0;
}
