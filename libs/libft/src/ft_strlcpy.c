#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (src[b] != '\0')
		b++;
	if (dstsize == 0)
		return (b);
	while (src[a] && dstsize > a + 1)
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (b);
}
