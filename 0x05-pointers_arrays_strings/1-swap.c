#include "main.h"

/**
 * swap_int - swap the values of two integers a and b 
 *0a: A pointer to an int that will be updated
 *0b: B pointer to an int that will be updated
 * Return: void means our answer is correct
 */

void swap_int(int *a, int*b)
{
int f;

f = *a;
*a = *b;
*b = f;
}
