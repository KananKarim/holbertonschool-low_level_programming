#include "main.h"

/**
 *swap_int - swapping the two values
 *@a: first int
 *@b: second int
 *Return: Nothing
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
