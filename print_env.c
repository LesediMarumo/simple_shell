#include "shell.h"

/**
 * print_environment - Prints the Environment
 * Return: void
 */
void print_environment(void)
{
	char **env = environ;

	while (*env != NULL)
	{
		printf("%s\n", *env);
		env++;
	}
}
