#ifndef MY_FILE
#define MY_FILE
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif