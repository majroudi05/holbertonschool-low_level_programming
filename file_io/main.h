#ifndef MY_FILE_I/O
#define MY_FILE_I/O
#include<unistd.h>
#include<fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif