#include <libft.h>
#include <stdio.h>

int	ft_check_input(char s[])
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (1);
	i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc < 1)
	{
		ft_putstr_fd("Error\n", 1);
		return (1);
	}
	while (i < argc)
	{
		if (ft_check_input(argv[i]))
		{
			ft_putstr_fd("Error\n", 1);
			return (1);
		}
		i++;
	}
	return (0);
}
