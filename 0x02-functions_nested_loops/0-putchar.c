#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c = '_';

    write(1, &c, 1);
    write(1, "putchar\n", 7);

    return (0);
}
