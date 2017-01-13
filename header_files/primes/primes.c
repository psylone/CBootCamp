#define ZERO_REMAINDER(n, i) (n % i == 0)

int
is_prime(int n)
{
  if (n <= 1)     return 0;
  if (n == 2)     return 1;
  if (ZERO_REMAINDER(n, 2)) return 0;

  int i;

  for (i = 3; (i * i) <= n; i++)
    if (ZERO_REMAINDER(n, i)) return 0;

  return 1;
}
