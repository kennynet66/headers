#ifndef main_h
#define main_h
/**
 * _putchar - prints characters in the console
 * @c: character to be printed
 * 
 * _strcmp - compares two strings or characters
 * @s1: first string
 * @s2: Second string
*/

/* Built in Header files */
#include <string.h>
#include <stdio.h>
#include <unistd.h>

/* Prototypes */
void _putchar(char c)
{
    write(1, &c, 1);
}

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
#endif