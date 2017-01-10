#include <stdio.h>

int
isprime(int n);

void
print_primes(int n);

int
main(int argc, char *argv[])
{
  print_primes(1000);

  return 0;
}

int
isprime(int n)
{
  if (n <= 1) return 0;

  int i;

  for (i = 2; (i * i) <= n; i++)
    if (n % i == 0) return 0;

  return 1;
}

void
print_primes(int n)
{
  int primes_count = 0,
      next_number  = 0;

  while (primes_count < n) {
    if (isprime(next_number)) {
      printf("%d: %d\n", primes_count + 1, next_number);
      primes_count++;
    }

    next_number++;
  }
}
