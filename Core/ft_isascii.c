int	ft_is_ascii(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 127))
			return(0);
		i++;
	}
	return (1);
}