#include <fcntl.h>
#include "get_next_line.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	int 	i;
	int		j;
	int		fd;
	char	*buff;

	fd = 0;
	if (argc == 2)
		if ((fd = open(argv[1], O_RDONLY)) != -1)
		{
			i = 1;
			j = 1;
			while ((i = get_next_line(fd, &buff)) == 1)
			{
				ft_putnbr(j);
				ft_putendl(buff);
				j++;
			}
		}
	return (0);
}
