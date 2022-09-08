#include "holberton.h"

/**
 * main - func with infinite loop
 * @ac: No u
 * @av: No use
 * Return: loop.
 **/
int main(int ac, char **av)
{
	(void)av;
	(void)ac;

	signal(SIGINT, controlC);
	prompt();
	return (0);
}
