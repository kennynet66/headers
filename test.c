#include "funcs.h"

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
    char str1[6] = "it";
    char str2[6] = "works";

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

    /* Test for _strlen */
    printf("**********string length**********\n");
    char exmp[] = "My name is";
    int len = _strlen(exmp);
    printf("%d\n", len);

    /* Test for factorial */
    printf("**********factorial**********\n");
    int n = 5;
    int fact = factorial(n);
    printf("%d", fact);

    /* Test for _pow_recursion */
    printf("**********power**********\n");
    int x = 2;
    int y = 3;
    int pow = _pow_recursion(x, y);
    printf("%d\n", pow);

    /* Test for _puts_recursion */
    printf("**********puts**********\n");
    char *s = "It works";
    _puts_recursion(s);

    /* test for _puts_rev */
    printf("**********puts_rev**********\n");
    char *s1 = "It works";
    _puts_rev(s1);
    
    return (0);
}