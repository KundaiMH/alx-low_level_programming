/**
 * _sqrt_recursion_wrapper - A wrapper that performs the recursion for square root calculation
 * @n: The input number
 * @min: The minimum number to guess
 * @max: The maximum number to guess
 *
 * Return: The square root of @n, or -1 if no perfect square exists
 */
int _sqrt_recursion_wrapper(int n, int min, int max)
{
	int guess, guess_squared;

	guess = (min + max) / 2; /* Get the guess (g) */
	guess_squared = guess * guess; /* Square the guess (sg) */

	if (guess_squared == n) /* If squared guess is equal to n, return guess */
		return (guess);
	else if (min + 1 == max && guess_squared < n) /* Check if consecutive numbers and guess_squared < n */
		return (-1);
	else if (guess_squared < n) /* Overshoot the guess if sg is less than n */
		return (_sqrt_recursion_wrapper(n, guess + 1, max));
	else /* Undershoot the guess if sg is greater than n */
		return (_sqrt_recursion_wrapper(n, min, guess));
}

/**
 * _sqrt_recursion - A function that returns the natural square root of a number
 * @n: The input number
 *
 * Return: The square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n == 1) /* sqrt(1) == 1 */
		return (1);
	else if (n == 0) /* sqrt(0) == 0 */
		return (0);
	else if (n < 0) /* sqrt(-n) == -1 (Not Applicable) */
		return (-1);
	else
		return (_sqrt_recursion_wrapper(n, 1, n));
}
