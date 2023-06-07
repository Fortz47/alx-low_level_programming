#include "main.h"


/**
 * _sqrt_recursive_helper - returns the natural square root of a number.
 * @n: parameter n
 * @start: start range
 * @end: end range
 *
 * Return: square root of a number.
 */

int _sqrt_recursive_helper(int n, int start, int end)
{
    if (start > end) {
        return end;
    }

    int mid = start + (end - start) / 2;
    int square = mid * mid;

    if (square == n) {
        return mid;
    } else if (square > n) {
        return _sqrt_recursive_helper(n, start, mid - 1);
    } else {
        return _sqrt_recursive_helper(n, mid + 1, end);
    }
}

int _sqrt_recursive(int n)
{
    if (n < 0)
        return -1;
    return _sqrt_recursive_helper(n, 0, n);
}
