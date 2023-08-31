#include "funcs.h"
/**
 * _putchar - prints characters in the console
 * @c: character to be printed
 * 
 * _strcmp - compares two strings or characters
 * @s1: first string to be compared
 * @s2: second string to be compared
 * 
 * _strcat - Concatenates 2 strings
 * @dest: This is the destination string
 * @src: This is the source string
 * 
 * _strlen - returns the length of a string
 * @s: string to be measured
 * 
 * factorial - returns the factorial of a number
 * @n: number to be factored
 * 
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base number
 * @y: power number
 * 
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to be printed
 * 
 * _puts_rev - prints a string in reverse
 * @s: string to be printed
 * 
 * _strlen_recursion - returns the length of a string
 * @s: string to be measured
 * 
 * Return: 0
*/

/* Built in Header files */
#include <string.h>
#include <stdio.h>
#include <unistd.h>

/* Prototypes */


/* For printing characters */
void _putchar(char c)
{
    write(1, &c, 1);
}


/* Comparing strings */
int _strcmp(char *s1, char *s2)
{
    int flag = 0, i;

    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            flag = s1[i] - s2[i];
            break;
        }
    }
        return (flag);
}


/* Get the length of a string */
int _strlen(char *s)
{
    int i, len;

    for (i = 0; s[i] != '\0'; i++)
    {
        len = i + 1;
    }
    return (len);
}


/* Concatenating 2 strings */
char _strcat(char *dest, char *src)
{
    int i;
    int s1 = _strlen(dest);

    for (i = 0; src[i] != '\0'; i++)
    {
        dest[s1] = src[i];
        s1++;
    }
    dest[s1] = '\0';
}


/* Factorial of a number */
int factorial(int n)
{
    if (n < 0)
    {
        return (-1);
    }
    else if (n == 0)
    {
        return (1);
    }
    else
    {
        return (n * factorial(n - 1));
    }
}


/* Power of a number */
int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return (-1);
    }
    else if (y == 0)
    {
        return (1);
    }
    else
    {
        return (x * _pow_recursion(x, y - 1));
    }
}


void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }
    _putchar(*s);
    _puts_recursion(s + 1);
}

void _puts_rev(char *s)
{
    if (*s)
    {
        _puts_rev(s + 1);
        _putchar(*s);
    }
}

int _strlen_recursion(char *s)
{
    if (*s)
    {
        return (1 + _strlen_recursion(s + 1));
    }
    else
    {
        return (0);
    }
}