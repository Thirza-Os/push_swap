#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			leng_dst;
	size_t			leng_src;

	leng_dst = ft_strlen(dst);
	leng_src = ft_strlen(src);
	if (dstsize < leng_dst)
		return (leng_src + dstsize);
	if (dstsize == leng_dst)
		return (leng_src + leng_dst);
	if (leng_src + 1 > (dstsize - leng_dst))
	{
		ft_memcpy(dst + leng_dst, src, (dstsize - leng_dst - 1));
		dst[dstsize - 1] = '\0';
	}
	else
	{
		ft_memcpy(dst + leng_dst, src, leng_src + 1);
	}
	return (leng_dst + leng_src);
}
