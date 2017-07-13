#include "shell.h"

/**
 * main - main function for the shell
 *
 * Return: 0 or exit status, or ?
 */
int main(void)
{
	size_t len_buffer = 0;
	unsigned int is_pipe = 0;
	env_t *env = NULL;
	struct stat st;
	vars_t vars = {NULL, NULL, NULL, 0};

	env = make_env(environ);
	vars.env = &env;
	if (fstat(STDIN_FILENO, &st) == -1)
	{
		perror("Error with STDIN");
		exit(1);
	}
	if ((st.st_mode & S_IFMT) == S_IFIFO)
		is_pipe = 1;
	if (is_pipe == 0)
		_puts("$ ");
	while (getline(&(vars.buffer), &len_buffer, stdin) != -1)
	{
		vars.count++;
		vars.av = tokenize(vars.buffer, "\n \t");
		if (vars.av && vars.av[0])
			if (check_for_builtins(&vars) == NULL)
				check_for_path(&vars);
		free(vars.buffer);
		free(vars.av);
		if (is_pipe == 0)
			_puts("$ ");
		vars.buffer = NULL;
	}
	free_env(&env);
	free(vars.buffer);
	exit(127);
}
