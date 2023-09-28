#include "main.h"
int actual_sqrt_recusion(int n, int i);
/**
 * _sqrt_recirsion -returns the natural square root of a number
 * number to calculatethe square root of 
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
    return (-1);
    return (actual_sqrt_recusion(n, 0) );
}
/** 
* actual_sqrt_recusion - recursion to find the natural 
* @n: number to calculate the square root of 
* @i: iterator
*
*Return: the resulting square root 
*/
int actual_sqrt_recusion(int n, int i)
{
    if (i * i > n)
    return (-1);
    if (i * i == n)
    return (i);
    return (actual_sqrt_recusion(n, i + 1));
}
