#include"main.h"
#include <unistd.h>
/**
 * _putchar - prints char with stdout
 * @c: char to print
 * @k: counter through string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c, int *k)
{
*k += 1;
return (write(1, &c, 1));
}
