#include"main.h"
/**
**print_last_digit - the function is printing the last digit of the number
**@r: is the character to be checked
**Return: the value of the last digit
**/
int print_last_digit(int r)
{
int i;
if (r < 0)
{
i = (r * -1) % 10;
}
else
i = r % 10;
return (i);
}

