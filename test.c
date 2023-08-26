#include "main.h"

int main(void)
{
    /* Test for _putchar */
    printf("**********Putchar**********\n");
    _putchar('I');
    _putchar(' ');
    _putchar('W');
    _putchar('o');
    _putchar('r');
    _putchar('k');
    _putchar('!');
    _putchar('\n');

    /* Test for _strcmp */
    printf("**********string comparison**********\n");
    char str1[6] = "Hello";
    char str2[6] = "World";

    printf("%d\n", _strcmp(str1, str2));
    printf("%d\n", _strcmp(str2, str1));
    printf("%d\n", _strcmp(str1, str1));

    /* Test for _strcat */
    printf("**********string concatenation**********\n");
    char c1[] = "Kenny ";
    char c2[] = "Maina";

    _strcat(c1,c2);
    printf("fullname is: %s\n", c1);
    printf("It works\n");
}