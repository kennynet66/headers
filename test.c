#include "main.h"

int main(void)
{
    char str1[6] = "Hello";
    char str2[6] = "World";

    printf("%d\n", _strcmp(str1, str2));
    printf("%d\n", _strcmp(str2, str1));
    printf("%d\n", _strcmp(str1, str1));
}