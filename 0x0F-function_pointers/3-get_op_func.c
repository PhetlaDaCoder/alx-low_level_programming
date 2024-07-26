#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - function pointer
 * @s: given operator
 *
 * Return: pointer to function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div},
	{ "%", op_mod},
	{ NULL, NULL }
	};
	int i;

	i = 0;

	if (i < 5)
		return (0)
		{
			else if (strcmp(s, ops) == 0)
				return (ops[i].f);

			i++;
		}

		return (0);
}
