
/**
 *sqrt_helper - return the natural root o number
 *@num: number
 *@guess: int guess
 *Return: int root
 */

int sqrt_helper(int num, int guess)
{
int new_guess = (guess + num / guess) / 2;
if (new_guess == guess)
{
return (new_guess);
}
else
{
return (sqrt_helper(num, new_guess));
}
}

/**
 *sqrt_helper - return the natural root o number
 *@n: number
 *Return: int root or -1
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else if ((sqrt_helper(n, n) * sqrt_helper(n, n)) != n)
return (-1);
return (sqrt_helper(n, n));
}
