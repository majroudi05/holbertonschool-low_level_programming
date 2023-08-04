 #include"main.h"
 /**
  * get_bit - Function that returns the value of a bit at a given index
  * @n: input value
  * @index: input value
  * Return: the value of the bit at index
 **/
int get_bit(unsigned long int n, unsigned int index)
{
int bit;
if (index > 63)
return (-1);
bit = (n >> index) & 1;
return (bit);
}
