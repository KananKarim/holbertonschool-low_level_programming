#include "main.h"


/**
*print_square - prints squares
*@size: parameter
*Return:returns nothing
*/

void print_square(int size)
{
int count, i;
count = 0;
if (size > 0)
{
while (count < size)
{
count++;
for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
