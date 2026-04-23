#include "libft.h"

static size_t	dst_len(const char *dst, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && dst[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = dst_len(dst, size);
	slen = ft_strlen(src);
	if (dlen == size)
		return (size + slen);
	i = 0;
	while (src[i] && dlen + i + 1 < size)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
