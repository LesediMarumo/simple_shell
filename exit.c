#include "shell.h"

/**
 * _handle_exit - Gets the line
 * @command:pointer to a size_t variable.
 */
void _handle_exit(char *command)
{
	char *arg = _strtok(NULL, " ");
	int status;

	if (arg != NULL)
	{
		status = atoi(arg);
		free(command);
		exit(status);
	}
	else
	{
		free(command);
		exit(EXIT_SUCCESS);
	}
}
