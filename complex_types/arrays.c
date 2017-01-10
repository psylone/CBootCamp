#include <stdio.h>

int
main()
{
  int grades[5] = { [0] = 1, [4] = 5 };
  int i;

  // for (i = 0; i < 5; i++)
  //   grades[i] = i + 1;

  for (i = 0; i < 5; i++)
    // printf("grades[%d]=%d\n", i, grades[i]);
    printf("grades[%d]=%d\n", i, *(grades + i));

  return 0;
}
