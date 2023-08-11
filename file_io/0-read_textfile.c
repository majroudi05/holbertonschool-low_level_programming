#include"main.h"
/**
 *read_textfile - function that reads a tex file and print it
 *@filename: is the file
 * @letters: is the number of letters it should read
 * Return: the nb of leters and the text
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (w);
}
