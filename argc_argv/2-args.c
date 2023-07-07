#include <stdio.h>
/**
 *main - Entry of the program
 *@argc: input value
 *@argv: input value
 *Retur: always 0
 **/
int main(int argc, char *argv[])
{
for (int i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
