#include<stdio.h>
/**
 * first - print before main
 *
 * No Return
 */
void first (void) __attribute__ ((constructor))
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}