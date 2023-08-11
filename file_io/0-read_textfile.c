#include"main.h"
/**
 *read_textfile - function that reads a tex file and print it
 *@filename: is the file
 * @letters: is the number of letters it should read
 * Return: the nb of leters and the text
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *f = fopen(filename, "r");
char *buf;
size_t r;
size_t w;
if (filename == NULL)
{
return (0);
}
if (f == NULL)
{
return (0);
}
buf = (char *)malloc(letters + 1);
if (buf == NULL)
{
fclose(f);
return (0);
}
r = fread(buf, sizeof(char), letters, f);
w = fwrite(buf, sizeof(char), r, stdout);
free(buf);
fclose(f);
return (w);
}
