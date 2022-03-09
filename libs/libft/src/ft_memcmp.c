#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*own_s1;
	const char	*own_s2;
	size_t		a;

	own_s1 = s1;
	own_s2 = s2;
	a = 0;
	if (n == 0)
		return (0);
	while (a < n - 1)
	{
		if (own_s1[a] != own_s2[a])
			return ((unsigned char)own_s1[a] - (unsigned char)own_s2[a]);
		a++;
	}
	return ((unsigned char)own_s1[a] - (unsigned char)own_s2[a]);
}
