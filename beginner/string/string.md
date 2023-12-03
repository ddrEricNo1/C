#include <stdio.h>
#include <string.h>
/*
concatenate strings
append a copy of the null-terminated string s2 to the end of the null-terminated string s1, then add a terminating '\0'. The string s1 must have sufficient space to hold the result.

The strncat() function appends not more than n characters from s2, and then adds a terminating '\0'.

restrict关键字主要用于编译器优化：这个指针是访问一块内存的唯一途径，没有其他别名的指针可以访问同一块内存

char * strcat(char *restrict s1, const char *restrict s2);

char * strncat(char *restrict s1, const char *restrict s2, size_t n);
*/

