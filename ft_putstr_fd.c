#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*int	main(void)
{
	ft_putstr_fd("Hello World", 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
