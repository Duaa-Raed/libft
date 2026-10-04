#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*int	main(void)
{
	ft_putendl_fd("Hello World", 1);
	ft_putendl_fd("This is Libft", 1);
	return (0);
}*/