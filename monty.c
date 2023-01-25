#include "monty.h"
global_var var_global;
/**
 * main - driver function for monty program
 * @ac: int num of arguments
 * @av: opcode file
<<<<<<< HEAD
 * Return: 0
=======
 * Return 0
>>>>>>> c27cd86ea7b86007358e0f2ede67f018bdf53b5b
 */
int main(int ac, char **av)
{
	stack_t *stack;

	stack = NULL;
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	read_file(av[1], &stack);
<<<<<<< HEAD
    /* recordar liberar memorias */
=======
	/* recordar liberar memorias */
>>>>>>> c27cd86ea7b86007358e0f2ede67f018bdf53b5b
	free_dlistint(stack);
	return (0);
}
