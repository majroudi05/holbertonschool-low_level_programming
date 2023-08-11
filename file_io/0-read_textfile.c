#include"main.h"
/**
 *read_textfile - function that reads a tex file and print it
 *@filename: is the file
 * @letters: is the number of letters it should read
 * Return: the nb of leters and the text
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
size_t f;
size_t w;
size_t r;
char *buf;
f = open(filename, O_RDONLY);
if (f == -1)
{
return (0);
}
buf = malloc(sizeof(char) * letters);
r = read(f, buf, letters);
w = write(STDOUT_FILENO, buf, r);
free(buf);
close(f);
return (w);
}
