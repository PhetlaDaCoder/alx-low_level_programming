int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - adds two digits.
 * @a: first digit.
 * @b: second digit.
 * Return: total
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - minus two digits.
 * @a: first digit.
 * @b: second digit.
 * Return: total
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiple two digits.
 * @a: first digit.
 * @b: second digit.
 * Return: total
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divedes two digits.
 * @a: first digit.
 * @b: second digit.
 * Return: total
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - finds modulus of two digits.
 * @a: first digit.
 * @b: second digit.
 * Return: modulud
 */

int mod(int a, int b)
{
	return (a % b);
}
