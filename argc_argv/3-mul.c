#include "main.h"
#include <stdio.h>

/** 
* main -
* 
* @argc:
*
* @argv:
*
* Return: 0
*/

int main(int argc, char *argv[])
{
  int result;
  
  if (argc != 2)
  {
    printf("Error\n");
    return (1);
  }
  
  int num1 = argv[1];
  int num2 = argv[2];

  result = num1 * num2;
    printf(result);

  return 0;
}


