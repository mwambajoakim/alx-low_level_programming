#include "3-calc.h"

/**
 * main - Entry point function.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 is success.
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	calc = operator(num1, num2);
	printf("%d\n", calc);

	return (0);
}
