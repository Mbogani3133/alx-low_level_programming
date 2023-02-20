#include <stdio.h>

/**
 * main - Entry point
 *
 * return: always 0 (Success)
 */
int main(void)
{
  int integerType;
  float floatType;
  char charType;
  long int longintType;
  long long int longlongintType;

  /*Sizeof operator is used to evaluate the size of a variable*/
  printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(integerType));
  printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(floatType));
  printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(charType));
  printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(longintType));
  printf("size f long long int: %lu byte(s)\n", (unsigned long)sizeof(longlongintType));
  return (0);
}
