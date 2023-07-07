#include <stdio.h>
/**
 *main - Entry of the program
 *@argc: input value
 *@argv: input value
 *Return: always 0
 **/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
