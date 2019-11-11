#include "get_next_line.h"

int	main()
{
	int fd;
	int	fd2;
	char *line;
	int a;

	line = NULL;
	a = 0;
	fd = open("main.c", O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("%s, \n", line);
		free(line);
	}
	printf("%s, \n", line);
	free(line);
	close(fd);
	fd = open("get_next_line.c", O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("%s, \n", line);
		free(line);
	}
	printf("%s, \n", line);
	free(line);
	close(fd);
	fd = open("main.c", O_RDONLY);
	fd2 = open("get_next_line.c", O_RDONLY);
	while (get_next_line(fd, &line) || a == 1)
	{
		printf("%s, \n", line);
		free(line);
		if (a == 1)
		{
			a = get_next_line(fd2, &line);
			free(line);
		}
	}
	printf("%s, \n", line);
	free(line);
	close(fd);
	close(fd2);
	fd = open("get_next_line.c", O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("%s, \n", line);
		free(line);
	}
	printf("%s, \n", line);
	free(line);
	close(fd);
	fd = open("get_next_line_utils.c", O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("%s, \n", line);
		free(line);
	}
	printf("%s, \n", line);
	free(line);
	close(fd);
	fd = open("get_next_line_utils.c", O_RDONLY);
	fd2 = open("get_next_line.h", O_RDONLY);
	while (get_next_line(fd, &line) || a == 1)
	{
		printf("%s, \n", line);
		free(line);
		if (a == 1)
		{
			a = get_next_line(fd2, &line);
			free(line);
		}
	}
	printf("%s, \n", line);
	free(line);
	close(fd);
	close(fd2);
	fd = open("main.c", O_RDONLY);
	fd2 = open("get_next_line.c", O_RDONLY);
	get_next_line(fd2, &line);
	printf("%s, \n", line);
	free(line);
	while (get_next_line(fd, &line))
	{
		printf("%s, \n", line);
		free(line);
	}
	printf("%s, \n", line);
	free(line);
	while (get_next_line(fd2, &line))
	{
		printf("%s, \n", line);
		free(line);
	}
	printf("%s, \n", line);
	free(line);
	close(fd);
	close(fd2);
}