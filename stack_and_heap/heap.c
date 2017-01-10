#include <stdio.h>
#include <stdlib.h>

double
*multiply_by_two(double *value)
{
  double *twice = malloc(sizeof(double));

  *twice = *value * 2;

  printf("%d\n", twice);

  return twice;
}

int
main()
{
  int *age = malloc(sizeof(int));

  *age = 30;

  double *salary = malloc(sizeof(salary));

  *salary = 12345.67;

  double *my_list = malloc(3 * sizeof(double));

  my_list[0] = 1.2;
  my_list[1] = 2.3;
  my_list[2] = 3.4;

  double *twice_salary = multiply_by_two(salary);

  printf("double your salary is: %.3f\n", *twice_salary);

  printf("%d\n", twice_salary);

  free(age);
  free(salary);
  free(my_list);
  free(twice_salary);

  return 0;
}
