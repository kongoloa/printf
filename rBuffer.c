#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
  * reset_buffer - initializes and resets a buffer
  * @buffer: buffer size
  */
void reset_buffer(char *buffer)
{
int i;

for (i = 0; i < 1024; i++)
{
buffer[i] = 0;
}
buffer[i] = '\0';
}

/**
  * _write_buffer - writes to the buffer
  * @buffer: takes in a buffer pointer
  * @index: takes in an index pointer
  */
void _write_buffer(char *buffer, int *index)
{
write(1, buffer, *index);
}
