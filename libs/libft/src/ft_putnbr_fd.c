#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = num * -1;
	}
	if ((num / 10) > 0)
	{
		ft_putnbr_fd((num / 10), fd);
	}
	ft_putchar_fd((num % 10 + '0'), fd);
}
