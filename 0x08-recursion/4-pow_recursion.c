/**
 * _pow_recursion - calculates the value of x raised to the power of y
 * @x: the base value
 * @y: the exp value
 *
 * Return: the result of x raised to the pow of y, or -1 :)
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return -1;
    }
    else if (y == 0)
    {
        return 1;
    }
    else
    {
        return x * _pow_recursion(x, y - 1);
    }
}
